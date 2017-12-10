main : main.o
	gcc -g main.o -L../lib/jjlib -lfuncs -L../lib/jwlib -ljiwoofuncs -L../lib/jylib -ljyfuncs -o ../main

main.o : main.c
	gcc -c -g main.c -I../include/jjinclude -o main.o

clean :
	rm ../main main.o
