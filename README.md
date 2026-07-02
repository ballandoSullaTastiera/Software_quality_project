# Software_quality_project
Implementing Continous Integration

## make-Targets
### C-Teil
make: siehe make build

make build: konfiguriert und builded "firmware" aus main.c prime.c und prime.h

make test: fuehrt die Unit-Tests fuer prime.c aus (mit Unity)

make clean: loescht den build-Ordner in src

make check: fuehrt statische Codeanalyse aller in src und Unterverzeichnissen vorhandenen .c und .h Dateien aus (mit cppcheck)

### Python-Teil
make: siehe make install

make install: installiert requirements.txt

make check: fuehrt statische Codeanalyse aller direkt in python/ liegenden .py Dateien aus (mit Pylint)

make test: fuehrt die Unit-Tests fuer numberStrings.py aus (mit pytest)

make clean: loescht  python/_pycache_ .pytest_cache und tests/PythonUnityTests/_pycache_

## Lokal bauen und testen
eventuell Voraussetzungen wie z.B. ubuntu cppcheck etc. lokal installieren

### C-Teil
cd src

make (oder make build)

make test

make check

### Python-Teil
cd python

make (oder make install)

make test

make check


## Dependencies in CMake
Unity-Project von Mike Karlesky, Mark VanderVoord, Greg Williams

## Klarname
siehe Email-Adresse