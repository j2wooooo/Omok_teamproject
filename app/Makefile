main : main.o
	gcc -g main.o -L../lib -lfuncs -o ../main

main.o : main.c
	gcc -c -g main.c -I../include -o main.o

clean :
	rm ../main main.o
