# nu_langdetect
a **small**, fast, "static" C header file-only library to detect the language of text documents

    Usage:  

      #include "nu_langdetect.h"

      [...]
    
      nu_langid l;
      l=nu_lang_detect("Did you forget the initialization?");
       --> you'll get l == lang_english
      l=nu_lang_detect("No, non serve una chiamata di inizializzazione");
       --> you'll get l == lang_italian
      l=nu_lang_detect(u8"¿Ni siquiera tengo que cargar algo desde el archivo?");
       --> you'll get l == lang_spanish
      l=nu_lang_detect(u8"Je peux donc simplement l'inclure et l'utiliser, super");
       --> you'll get l == lang_french
      l=nu_lang_detect(u8"Welche Lizenz hat diese Software?");
       --> you'll get l == lang_german
      l=nu_lang_detect(u8"O autor libera esta fonte sob a licença do MIT");
       --> you'll get l == lang_portuguese

### Supported languages

    lang_bulgarian
    lang_czech
    lang_danish
    lang_dutch
    lang_english
    lang_estonian
    lang_finnish
    lang_french
    lang_german
    lang_greek
    lang_hungarian
    lang_italian
    lang_latvian
    lang_lithuanian
    lang_norwegian
    lang_polish
    lang_portuguese
    lang_romanian
    lang_russian
    lang_slovak
    lang_slovenian
    lang_spanish
    lang_swedish
    lang_turkish
    lang_ukrainian

### Data size
To handle these **25 languages** my code uses just **23658 byte** of static data

### Benchmark 
A quick check using [**europarl_for_language_detection_10k**](https://huggingface.co/datasets/simoneteglia/europarl_for_language_detection_10k) shows these results

**train.csv** 

	bulgarian: precision: 100,00% recall: 91,51%
	czech: precision: 85,08% recall: 78,34%
	danish: precision: 99,22% recall: 74,09%
	dutch: precision: 96,12% recall: 98,81%
	english: precision: 96,52% recall: 99,27%
	estonian: precision: 94,91% recall: 81,38%
	finnish: precision: 93,67% recall: 89,41%
	french: precision: 97,04% recall: 98,62%
	german: precision: 99,03% recall: 98,32%
	greek: precision: 99,90% recall: 98,48%
	hungarian: precision: 96,54% recall: 96,14%
	italian: precision: 98,74% recall: 98,08%
	latvian: precision: 97,98% recall: 89,68%
	lithuanian: precision: 97,55% recall: 87,12%
	norwegian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	polish: precision: 94,80% recall: 88,53%
	portuguese: precision: 94,25% recall: 97,36%
	romanian: precision: 98,91% recall: 85,20%
	russian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	slovak: precision: 95,67% recall: 75,60%
	slovenian: precision: 88,14% recall: 89,73%
	spanish: precision: 91,71% recall: 97,92%
	swedish: precision: 99,34% recall: 96,41%
	turkish: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	ukrainian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	avg: precision: 94,31% recall: 90,95%

**test.csv**

	bulgarian: precision: 100,00% recall: 97,25%
	czech: precision: 88,08% recall: 84,95%
	danish: precision: 99,39% recall: 73,30%
	dutch: precision: 97,39% recall: 98,90%
	english: precision: 96,90% recall: 98,60%
	estonian: precision: 95,74% recall: 92,05%
	finnish: precision: 96,43% recall: 90,40%
	french: precision: 98,85% recall: 98,60%
	german: precision: 99,39% recall: 98,20%
	greek: precision: 100,00% recall: 98,60%
	hungarian: precision: 98,14% recall: 97,70%
	italian: precision: 99,54% recall: 98,45%
	latvian: precision: 98,61% recall: 95,85%
	lithuanian: precision: 98,30% recall: 92,60%
	norwegian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	polish: precision: 96,67% recall: 94,25%
	portuguese: precision: 96,35% recall: 97,75%
	romanian: precision: 98,93% recall: 97,40%
	russian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	slovak: precision: 96,29% recall: 81,85%
	slovenian: precision: 89,53% recall: 94,45%
	spanish: precision: 96,45% recall: 97,85%
	swedish: precision: 99,53% recall: 96,15%
	turkish: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	ukrainian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
	avg: precision: 95,74% recall: 94,05%

**validation.csv** 

    bulgarian: precision: 100,00% recall: 96,60%
    czech: precision: 87,23% recall: 83,30%
    danish: precision: 99,06% recall: 73,45%
    dutch: precision: 97,25% recall: 99,15%
    english: precision: 97,32% recall: 99,70%
    estonian: precision: 94,63% recall: 87,15%
    finnish: precision: 94,14% recall: 89,20%
    french: precision: 98,26% recall: 98,60%
    german: precision: 99,75% recall: 98,45%
    greek: precision: 100,00% recall: 98,25%
    hungarian: precision: 97,05% recall: 97,20%
    italian: precision: 99,14% recall: 98,35%
    latvian: precision: 97,55% recall: 93,70%
    lithuanian: precision: 97,62% recall: 92,10%
    norwegian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
    polish: precision: 96,47% recall: 92,95%
    portuguese: precision: 96,04% recall: 98,15%
    romanian: precision: 99,28% recall: 96,25%
    russian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
    slovak: precision: 96,16% recall: 81,30%
    slovenian: precision: 88,80% recall: 91,60%
    spanish: precision: 96,31% recall: 97,95%
    swedish: precision: 99,43% recall: 96,05%
    turkish: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
    ukrainian: precision: 0,00% recall: 0,00% [no documents with this language in the dataset]
    avg: precision: 95,27% recall: 93,31% 

(I've used this dataset ONLY for benchmark - no training done from any of these files)

### Notes
- once in your project you need to define __NU_LANGDETECT_IMPLEMENT__  before including the .h file
- you should set your local as .utf8 (this function works on utf8 texts)
