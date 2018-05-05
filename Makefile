CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
.PHONY: all clean
OBJECTS = build/main.o build/board.o build/board_print_plain.o build/board_print.o 

all: bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/main.o: src/main.c
	$(CXX) $(CFLAGS) src/main.c -o build/main.o 

build/board.o: src/board.c src/board.h
	$(CXX) $(CFLAGS) src/board.c -o build/board.o

build/board_print_plain.o: src/board_print_plain.c src/board_print_plain.h
	$(CXX) $(CFLAGS) src/board_print_plain.c -o build/board_print_plain.o

build/board_print.o: src/board_print.c src/board_print.h
	$(CXX) $(CFLAGS) src/board_print.c -o build/board_print.o
build:
	mkdir build
bin:
	mkdir bin 
clean:
	rm build/*.o
	rm bin/*
