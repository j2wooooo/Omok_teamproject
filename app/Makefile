main : main.o
	gcc -g main.o -L../lib -lfuncs -L../jwlib -ljiwoofuncs -L../jylib -ljyfuncs -o ../main

main.o : main.c
	gcc -c -g main.c -I../include -o main.o

clean :
	rm ../main main.o
