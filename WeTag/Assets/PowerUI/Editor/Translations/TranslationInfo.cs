//--------------------------------------//               PowerUI////        For documentation or //    if you have any issues, visit//        powerUI.kulestar.com////    Copyright � 2013 Kulestar Ltd//          www.kulestar.com//--------------------------------------using System;using System.IO;using UnityEditor;namespace PowerUI{		/// <summary>A delegate used when a translation is completed.</summary>	/// <param name="translation">Information about the translation.</param>	public delegate void OnTranslated(TranslationInfo translation);			/// <summary>	/// Holds information about a particular translation.	/// </summary>		public class TranslationInfo{				/// <summary>The authentication key to use. Currently obtained from Bing.</summary>		public string Key;		/// <summary>The lower case language code to translate to, e.g. fr.</summary>		public string ToCode;		/// <summary>The language tag to append to the start of the result.</summary>		public string ToName;		/// <summary>The resulting translated text.</summary>		public string Result;		/// <summary>The lower case language code to translate from, e.g. en.</summary>		public string FromCode;		/// <summary>True if the result should be marked left to right.</summary>		public bool LeftToRight;		/// <summary>The text to be translated. &lt;v&gt; should be used here.</summary>		public string ToTranslate;		/// <summary>The path to the Languages/UI folder.</summary>		public string LanguagePath;		/// <summary>A delegate triggered when the translation is complete.</summary>		public OnTranslated OnComplete;						/// <summary>Holds the given information about a translation.</summary>		/// <param name="languagePath">The path to the Languages/UI folder.</param>		/// <param name="languageText">The text to be translated. &lt;v&gt; should be used here.</param>		/// <param name="from">The lower case language code to translate from, e.g. en.</param>		/// <param name="to">The lower case language code to translate to, e.g. fr.</param>		/// <param name="toName">The language tag to append to the start of the result.</param>		public TranslationInfo(string languagePath,string languageText,string from,string to,string toName){			LanguagePath=languagePath;			ToTranslate=languageText;			FromCode=from;			ToCode=to;			ToName=toName;		}				/// <summary>Gets the language tag. That's the small &gt;language&lt; tag at the top of the resulting file.</summary>		public string LanguageTag{			get{				string result="<language name='"+ToName+"' code='"+ToCode+"'";								if(LeftToRight){					result+="direction='ltr'";				}								result+=">";				return result;			}		}				/// <summary>The path to the newly translated file.</summary>		public string Filepath{			get{				string slash=System.IO.Path.DirectorySeparatorChar+"";				return LanguagePath+slash+ToName+".html";			}		}				/// <summary>Called when the translation is complete.</summary>		/// <param name="translation">The translated result.</param>		public void Complete(string translation){			Result=translation;			if(OnComplete!=null){				OnComplete(this);			}		}				/// <summary>Writes this translation result to it's file. Fails if there is no result.</summary>		public void WriteToFile(){			if(string.IsNullOrEmpty(Result)){				return;			}			File.WriteAllText(Filepath,LanguageTag+"\r\n"+Result);			// Refresh assets:			AssetDatabase.Refresh();		}			}	}