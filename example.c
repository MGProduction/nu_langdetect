#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <sys/types.h>

#define __NU_LANGDETECT_IMPLEMENT__
#include "nu_langdetect.h"


int main(int argc,const char*argv[])
{
 nu_langid l;
 setlocale(LC_ALL, ".utf8");
 l=nu_langdetect("Did you forget the initialization?");
 l=nu_langdetect("No, non serve una chiamata di inizializzazione");
 l=nu_langdetect(u8"¿Ni siquiera tengo que cargar algo desde el archivo?");
 l=nu_langdetect(u8"Je peux donc simplement l'inclure et l'utiliser, super");
 l=nu_langdetect(u8"Welche Lizenz hat diese Software?");
 l = nu_langdetect(u8"O autor libera esta fonte sob a licença do MIT");
 return 0;
}