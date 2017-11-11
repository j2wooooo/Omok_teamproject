libfuncs.a : map.o display_menu.o
	ar rv libfuncs.a map.o display_menu.o

map.o : map.c
	gcc -c -g map.c -I../include -o map.o

display_menu.o : display_menu.c
	gcc -c -g display_menu.c -I../include -o display_menu.o

clean :
	rm *.o libfuncs.a
