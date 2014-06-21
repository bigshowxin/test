./bin/main.exe:./tmp/main.o ./tmp/func.o
	gcc -o ./bin/main.exe ./tmp/main.o ./tmp/func.o -I./include/
./tmp/main.o:./src/main.c
	gcc -c ./src/main.c -o ./tmp/main.o -I./include/
./tmp/func.o:./src/func.c
	gcc -c ./src/func.c -o ./tmp/func.o -I./include/
