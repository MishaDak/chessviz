all: bin/chess

bin/chess: build/src/main.o build/src/board_print_plain.o build/src/board.o
	gcc -Wall -Werror build/src/main.o build/src/board_print_plain.o build/src/board.o -o bin/chess

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/board_print_plain.o: src/board_print_plain.c
	gcc -Wall -Werror -c src/board_print_plain.c -o build/src/board_print_plain.o

build/src/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/src/board.o
	
.PHONY: clean

clean:
	rm -rf build/*.o