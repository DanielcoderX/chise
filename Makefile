all: rm build

rm:
	rm -rdf build/

build:
	mkdir -p build/
	gcc -o build/emu src/*.c -lSDL -w -O
