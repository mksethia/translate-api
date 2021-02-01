
  /* ---------------------------------------------------
< Mannan Sethia 2020 - Translator using Google Translate >
 -------------------------------------------------------
    \
      \
        \
            |\___/|
          ==) ^Y^ (==
            \  ^  /
             )=*=(
            /     \
            |     |
           /| | | |\
           \| | |_|/\
           //_// ___/
               \_)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <windows.h>


void argError() {
  // Error message, specifies correct syntax
  printf("Error: incorrect syntax. Usage: 'translator.exe <from language> <to language> <string to translate>'. The string may only be 150 characters long or less.\n\n");

  printf("Language codes:\n");
  printf("Afrikaans:    af                ");
  printf("Galician:     gl                ");
  printf("Latin:        la                ");
  printf("Shona:        sn\n");
  printf("Albaninan:    sq                ");
  printf("Georgian:     ka                ");
  printf("Latvian:      lv                ");
  printf("Sindhi:       sd\n");
  printf("Amharic:      am                ");
  printf("German:       de                ");
  printf("Lithuanian:   lt                ");
  printf("Sinhala:      si\n");
  printf("Arabic:       ar                ");
  printf("Greek:        el                ");
  printf("L'mbourgish:  lb                ");
  printf("Slovak:       sk\n");
  printf("Armenian:     hy                ");
  printf("Gujurati:     gu                ");
  printf("Macedonian:   mk                ");
  printf("Slovenian:    sl\n");
  printf("Azerbaijani:  az                ");
  printf("Haitian:      ht                ");
  printf("Malagasy:     mg                ");
  printf("Somali:       so\n");
  printf("Basque:       eu                ");
  printf("Hausa:        ha                ");
  printf("Malay         ms                ");
  printf("Spanish:      es\n");
  printf("Belarusian:   bu                ");
  printf("Hawaiian:     hw                ");
  printf("Malayam:      ml                ");
  printf("Sundanese:    su\n");
  printf("Bengali:      bn                ");
  printf("Hebrew:       iw                ");
  printf("Maltese:      mt                ");
  printf("Swahili:      sw\n");
  printf("Bosnian:      bs                ");
  printf("Hindi:        hi                ");
  printf("Maori:        mi                ");
  printf("Swedish:      sv\n");
  printf("Bulgarian:    bg                ");
  printf("Hmong:        hm                ");
  printf("Marathi:      mr                ");
  printf("Tajik:        tg\n");
  printf("Catalan:      ca                ");
  printf("Hungarian:    hu                ");
  printf("Mongolian:    mn                ");
  printf("Tamil:        ta\n");
  printf("Cebuano:      ce                ");
  printf("Icelandic:    is                ");
  printf("Myan/Burmese: my                ");
  printf("Tatar:        tt\n");
  printf("Chichewa:     ny                ");
  printf("Igbo:         ig                ");
  printf("Nepali:       ne                ");
  printf("Telegu:       te\n");
  printf("Chinese:      cn                ");
  printf("Indonesian:   id                ");
  printf("Norwegian:    no                ");
  printf("Thai:         th\n");
  printf("Corsican:     co                ");
  printf("Irish:        ga                ");
  printf("Odia/Oriya:   or                ");
  printf("Turkish:      tr\n");
  printf("Croatian:     hr                ");
  printf("Italian:      it                ");
  printf("Pashto:       ps                ");
  printf("Turkmen:      tk\n");
  printf("Czech:        cs                ");
  printf("Japanese:     ja                ");
  printf("Persian:      fa                ");
  printf("Ukraninan:    uk\n");
  printf("Danish:       da                ");
  printf("Javanese:     jw                ");
  printf("Polish:       pl                ");
  printf("Urdu:         ur\n");
  printf("Dutch:        nl                ");
  printf("Kannada:      kn                ");
  printf("Portugese:    pt                ");
  printf("Uyghur:       ug\n");
  printf("English:      en                ");
  printf("Kazakh:       kk                ");
  printf("Punjabi:      pa                ");
  printf("Uzbek:        uz\n");
  printf("Esperanto:    eo                ");
  printf("Khmer:        km                ");
  printf("Romanian:     ro                ");
  printf("Vietnamese:   vi\n");
  printf("Estonian:     et                ");
  printf("Kinyarwanda:  rw                ");
  printf("Russian:      ru                ");
  printf("Welsh:        cy\n");
  printf("Filipino:     tl                ");
  printf("Korean:       ko                ");
  printf("Samoan:       sm                ");
  printf("Xhosa:        xh\n");
  printf("Finnish:      fi                ");
  printf("Kurdish:      ku                ");
  printf("Scots Gaelic: gd                ");
  printf("Yiddish:      yi\n");
  printf("French:       fr                ");
  printf("Kyrgyz:       ky                ");
  printf("Serbian:      sr                ");
  printf("Yoruba:       yo\n");
  printf("Frisian:      fy                ");
  printf("Lao:          lo                ");
  printf("Sesotho:      st                ");
  printf("Zulu:         zu\n\n");

  printf("Example: translator.exe en ge Hello");
}




int checkSubstring(char text[], char FirstCharinStr, int lenStr) {
  char comparator = 'm';
  int i = 210;
  int indexOfTranslated;
  for (i = 210; i < 660; i++) {
    if (text[i] == comparator) {
      if (text[i+1] == comparator) {
        if (text[i+5] == FirstCharinStr) {
          // printf("Success:\n");
          indexOfTranslated = i+957+lenStr;
        }
        else {
          printf("Error - the recieved html was not formatted correctly");
          exit(0);
        }
      }
    }
  }
  return indexOfTranslated;
}




int lenTranslatedString(char text[], int index) {
  int endStringindex;
  char comparator = '<';
  int i = index;
  for (i = index; i < index+250; i++) {
    if (text[i] == comparator) {
        endStringindex = i;
        i = i + 250;
    }
  }
  return endStringindex;
}




const char* constructString(char text[], int firstChar, int lastChar) {
  static char translatedText[250];
  int i = firstChar;
  int index = 0;
  for (i = firstChar; i < lastChar; i++) {
    translatedText[index] = text[i];
    index++;
  }
  char* translation = translatedText;
  return translation;
}




int main(int argc, char *argv[]) {
  // Checking argcount
  if ((argc < 4) || (argc > 4)) {
    argError();
    exit(0);
  }

  // Length of arguments passed into variables
  int lenFrom = strlen(argv[1]);
  int lenTo = strlen(argv[2]);
  int lenStr = strlen(argv[3]);

  // Checking length of arguments for proper syntax
  printf("Checking usage syntax ...\n");
  if ((lenFrom < 2) || (lenTo < 2) || (lenFrom > 2) || (lenTo > 2) || (lenStr > 150)) {
    argError();
    exit(0);
  }
  else {
    Sleep(200);
    printf("Success: correct syntax used\n\n");
  }

  // Arguments passed into discrete variables
  printf("Storing data to be used ...\n\n");
  char fromLang[3];
  char toLang[3];
  char str[151];
  strcpy(fromLang, argv[1]);
  strcpy(toLang, argv[2]);
  strcpy(str, argv[3]);
  Sleep(300);

  // Gets request: Python script. Python usage kept to a minimum
  char buf[187];
  snprintf(buf, sizeof(buf), "cmd /c python req.py -a %s%s%s", fromLang, toLang, str);
  printf("Connecting to translate.google.co.uk via Selenium in Python ...\n");
  system(buf);
  Sleep(7000);

  // Retrieving data from request in Python
  FILE *fp;
  fp = fopen("htmlTranslateOut.txt", "r");
  char htmlOut[2000];
  fgets(htmlOut, 1999, fp);
  printf("\nSuccess: data recieved\n\n");

  // Determining position of translated string
  printf("Checking if recieved connection data is correctly formatted ...\n");
  int firstChar = checkSubstring(htmlOut, str[0], lenStr);
  Sleep(200);
  printf("Success: recieved data parsable\n\n");

  // Getting length of translated string
  printf("Reconstructing translated text from data ...\n");
  Sleep(400);
  int endChar = lenTranslatedString(htmlOut, firstChar);
  //printf("%i %i", firstChar, endChar);

  // Constructing translated string
  const char* translatedString = constructString(htmlOut, firstChar, endChar);
  printf("Success:\n");
  printf("Translated Text: %s\n", translatedString);

  return 0;
}
