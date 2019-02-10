SOURCE_FILES = main.cpp socket.cpp
SOURCE_DIR = src
COMPILER_INPUT := $(foreach var, ${SOURCE_FILES}, ${SOURCE_DIR}/${var})

app: init
	g++ ${COMPILER_INPUT} -o bin/main
init:
	mkdir bin -p
clear:
	rm bin/* -f