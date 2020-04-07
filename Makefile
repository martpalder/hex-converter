build:
	gcc src/main.c -o bin/Hex-Converter

clean:
	del bin/Hex-Converter.exe

debug:
	gdb bin/Hex-Converter

run:
	bin/Hex-Converter