//--------------------------------------//               PowerUI////        For documentation or //    if you have any issues, visit//        powerUI.kulestar.com////    Copyright � 2013 Kulestar Ltd//          www.kulestar.com//--------------------------------------using UnityEditor;using UnityEngine;using System.Threading;using System.IO;using Wrench;using System.Collections;using System.Collections.Generic;using UnityHttp;namespace PowerUI{		/// <summary>	/// Displays options for automatically translating your UI language files.	/// </summary>		public class AutoTranslate : EditorWindow{				/// <summary>True when the target language file is found, and we'd like to check if overwriting it is ok.</summary>		public static bool FileExists;		/// <summary>True if the API key section is visible.</summary>		private static bool ShowAPIKey;		/// <summary>Set to true if a translation is in progress.</summary>		public static bool Translating;		/// <summary>The selected source file index in the AvailableSource array.</summary>		public static int SelectedSource;		/// <summary>The path to PowerUI.</summary>		public static string PowerUIPath;		/// <summary>The selected target langauge index in the AvailableTargets array.</summary>		public static int SelectedTarget;		/// <summary>The path to the Languages/UI folder.</summary>		public static string LanguagePath;		/// <summary>The access key to use when translating.</summary>		public static string TranslationKey;		/// <summary>The available source languages.</summary>		public static string[] AvailableSource;		/// <summary>The available target languages. Loaded from the languages.txt file.</summary>		public static string[] AvailableTargets;		/// <summary>The last opened translate window.</summary>		public static EditorWindow TranslateWindow;		/// <summary>The available target language codes. Loaded from the languages.txt file.</summary>		public static string[] AvailableTargetCodes;								// Add menu item named "Auto Translate" to the PowerUI menu:		[MenuItem("Window/PowerUI/Auto Translate")]		public static void ShowWindow(){			// Show existing window instance. If one doesn't exist, make one.			TranslateWindow=EditorWindow.GetWindow(typeof(AutoTranslate));						// Give it a title:			TranslateWindow.title="Auto Translate";						// Get the path to the Languages/UI folder:			LanguagePath=GetLanguagePath();						Translating=false;			FileExists=false;						// Get the translation key, if we have one:			TranslationKey=GetTranslationKey();			// Setup the foldout:			ShowAPIKey=(TranslationKey=="");						// Setup the PowerUI path:			PowerUIPath=PowerUIEditor.GetPowerUIPath();						if(LanguagePath!=""){				// Grab the language files:				string[] files=Directory.GetFiles(LanguagePath);				// Setup the available source array:				AvailableSource=new string[files.Length];								for(int i=0;i<files.Length;i++){					// Get the file name:					string[] pieces=files[i].Replace("\\","/").Split('/');					string fileName=pieces[pieces.Length-1];					// Drop the type:					pieces=fileName.Split('.');					// And put it as an available source language:					AvailableSource[i]=pieces[0];				}			}						// Load the target languages:			LoadAvailableLanguages();					}				void Update(){			// Update HTTP services:			Http.Flush();		}				void OnGUI(){			PowerUIEditor.HelpBox("This simplifies translating your game by sending off any language file for auto translation. Please note that you will need to quality check the results.");						if(AvailableSource==null){				PowerUIEditor.WarnBox("No language folder found; Create a Resources/Languages/UI folder for use with localisation first.");			}else if(AvailableSource.Length==0){				PowerUIEditor.WarnBox("No source languages found. To translate, you must have at least one language in your Resources/Languages/UI folder.");			}else{							ShowAPIKey = EditorGUILayout.Foldout(ShowAPIKey,"API Key");								if(ShowAPIKey){					if(GUILayout.Button("Get Free API Key")){						Application.OpenURL("http://help.kulestar.com/translate-powerui/#getAKey");					}										// The translation key (Bing API Key):					string result=EditorGUILayout.TextField("API Key",TranslationKey);										if(result!=TranslationKey){						TranslationKey=result;						SaveTranslationKey();					}				}								// Translate from language:				GUILayout.Label("Translate From",EditorStyles.boldLabel);				SelectedSource=EditorGUILayout.Popup(SelectedSource,AvailableSource);				// Translate to language:				GUILayout.Label("Translate To",EditorStyles.boldLabel);				SelectedTarget=EditorGUILayout.Popup(SelectedTarget,AvailableTargets);								if(Translating){					GUILayout.Label("Translating..",EditorStyles.boldLabel);				}else if(FileExists){					GUILayout.Label("Target file exists - would you like to overwrite it?");										if(GUILayout.Button("Yes")){						FileExists=false;						Perform(true);					}										if(GUILayout.Button("Cancel")){						FileExists=false;					}									}else if(GUILayout.Button("Translate Now")){					Perform(false);				}			}		}				/// <summary>Loads the set of translate to languages from the languages.txt file.</summary>		public static void LoadAvailableLanguages(){			// The path to the languages.txt file:			string languagesFile=TranslationsPath+"languages.txt";						// Does it exist?			if(!File.Exists(languagesFile)){				Debug.Log("Warning: No languages file found! languages.txt stores the languages available to translate to.");				return;			}						// Setup the lists of the codes and names:			List<string> languageCodes=new List<string>();			List<string> languageNames=new List<string>();						// Grab the set of available languages:			string[] available=File.ReadAllLines(languagesFile);						// For each of the available languages..			for(int i=0;i<available.Length;i++){				string languageLine=available[i].Trim();								if(languageLine==""){					continue;				}								// Each line is e.g. en=English. Split it up:				string[] pieces=languageLine.Split('=');								// Safety check:				if(pieces.Length!=2){					continue;				}								// Add the language code:				languageCodes.Add(pieces[0].ToLower());								// Add the language name:				languageNames.Add(pieces[1]);			}						// Apply the new sets:			AvailableTargetCodes=languageCodes.ToArray();			AvailableTargets=languageNames.ToArray();		}				/// <summary>Attempts to find the Languages/UI folder.</summary>		/// <returns>The path, relative to the project, if it was found.</returns>		public static string GetLanguagePath(){			return GetLanguagePath("Assets");		}				/// <summary>Attempts to find the Languages/UI folder within the given directory.</summary>		/// <param name="relativeTo">The directory to search from.</param>		/// <returns>The path, relative to the project, if it was found.</returns>		public static string GetLanguagePath(string relativeTo){			// Grab the path separator:			string slash=Path.DirectorySeparatorChar+"";						// Get sub directories inside the directory we're after:			string[] subDirectories=Directory.GetDirectories(relativeTo);						for(int i=0;i<subDirectories.Length;i++){				// Grab it's full name:				string fullPath=subDirectories[i];								if(fullPath.EndsWith(slash+"Languages")){					// So far so good - how about Languages/UI?					if(Directory.Exists(fullPath+slash+"UI")){						// Got it!						return fullPath+slash+"UI";					}				}else{					string path=GetLanguagePath(fullPath);					if(path!=""){						return path;					}				}			}						return "";		}				/// <summary>Performs the translation using options selected in the open window.</summary>		/// <param name="allowExists">True if we can safely overwrite the file if it exists.</param>		public static void Perform(bool allowExists){			if(Translating){				return;			}						if(Perform(AvailableSource[SelectedSource],AvailableTargetCodes[SelectedTarget],AvailableTargets[SelectedTarget],allowExists)){				Translating=true;			}		}				/// <summary>Performs the translation.</summary>		/// <param name="from">The filename of the file in the Languages/UI folder, without it's type.</param>		/// <param name="to">The language code that will be translated to, e.g. "fr".</param>		/// <param name="toName">The language name that will be translated to, e.g. "French".</param>		/// <param name="allowExists">True if we can safely overwrite the file if it exists.</param>		public static bool Perform(string from,string to,string toName,bool allowExists){						// Make sure the parser is ready to go:			UI.Start(true);						// 1. Parse the original file:			string slash=System.IO.Path.DirectorySeparatorChar+"";			string sourceLanguageFile=LanguagePath+slash+from+".html";						if(!File.Exists(sourceLanguageFile)){				Debug.LogError("Translate source file not found: "+sourceLanguageFile);				return false;			}						// Read the source text:			string sourceFile=File.ReadAllText(sourceLanguageFile);						// And parse it into a language set (of variables):			LanguageSet source=new LanguageSet(sourceFile);						// Grab the from language code:			string fromCode=source.Code;						string toTranslate="";			foreach(KeyValuePair<string,string> kvp in source.Map){				string varName=kvp.Key;				string varValue=kvp.Value;								// Rather interestingly, bing translate doesn't like <var> but does like <v>, and <v> is supported by the parser anyway!				toTranslate+="<v name='"+varName+"'>"+varValue+"</v>\n";			}						return Perform(toTranslate,fromCode,to,toName,allowExists);		}				/// <summary>Performs the translation.</summary>		/// <param name="languageText">The text to be translated. &lt;v&gt; should be used here.</param>		/// <param name="from">The language code to translate from, e.g. EN.</param>		/// <param name="to">The language code to translate to, e.g. FR.</param>		/// <param name="toName">The language name that will be translated to, e.g. "French".</param>		/// <param name="allowExists">True if we can safely overwrite the file if it exists.</param>		public static bool Perform(string languageFile,string from,string to,string toName,bool allowExists){			from=from.ToLower();			to=to.ToLower();			// Create the info object:			TranslationInfo info=new TranslationInfo(LanguagePath,languageFile,from,to,toName);						if(string.IsNullOrEmpty(TranslationKey)){				Debug.LogError("API Key missing! Please click on the Get Free API key button to see where you get one from.");				return false;			}						// Apply the key:			info.Key=TranslationKey;						if(!allowExists && File.Exists(info.Filepath)){				// Overwrite warning				FileExists=true;				return false;			}						// Hook up it's callback:			info.OnComplete=OnTranslationDone;			// Start translating:			Translations.Translate(info);						return true;		}				private static void OnTranslationDone(TranslationInfo info){			Translating=false;						if(info.Result==""){				Debug.LogError("No translation result available.");				return;			}						Debug.Log("Translation successful!");						// Write the result:			info.WriteToFile();						// Repaint the Window:			TranslateWindow.Repaint();		}				/// <summary>The filepath to the Translations editor folder.</summary>		public static string TranslationsPath{			get{				return PowerUIPath+"/Editor/Translations/";			}		}				/// <summary>The filepath to the file that holds the translation key.</summary>		public static string TranslationKeyFile{			get{				return TranslationsPath+"translate-key.txt";			}		}				/// <summary>Saves the TranslationKey into TranslationKeyFile.</summary>		public static void SaveTranslationKey(){			SaveTranslationKey(TranslationKey);		}				/// <summary>Saves the given TranslationKey into the TranslationKeyFile.</summary>		/// <param name="key">The key to save.</param>		public static void SaveTranslationKey(string key){			File.WriteAllText(TranslationKeyFile,key);		}				/// <summary>Loads the translation key from the TranslationKeyFile.</summary>		/// <returns>The loaded key.</returns>		public static string GetTranslationKey(){			if(File.Exists(TranslationKeyFile)){				return File.ReadAllText(TranslationKeyFile);			}						return "";		}			}	}