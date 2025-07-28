#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <sys/types.h>

#define __NU_LANGDETECT_IMPLEMENT__
#define __NU_LANGDETECT_NAMES__
#include "nu_langdetect.h"

char testset[][96] = { u8"Did you forget the initialization?",
                       u8"No, non serve una chiamata di inizializzazione",
                       u8"¿Ni siquiera tengo que cargar algo desde el archivo?",
                       u8"Je peux donc simplement l'inclure et l'utiliser, super",
                       u8"Welche Lizenz hat diese Software?",
                       u8"O autor libera esta fonte sob a licença do MIT",
                       ""
};

int main(int argc,const char*argv[])
{
 size_t n; 
 setlocale(LC_ALL, ".utf8");
 for (n = 0; *testset[n]; n++)
 {  
  char      langname[32], langsigle[3];
  printf("checking: %s\n", testset[n]);
  nu_langid l = nu_langdetect(testset[n]);
  nu_getlangname(l, langname, langsigle);
  printf("lang: %s_%s\n\n", langname, langsigle);
 }
 return 0;
}