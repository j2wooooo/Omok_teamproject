libfuncs.a : map.o display_menu.o game_manual.o getch.o
	ar rv libfuncs.a map.o display_menu.o game_manual.o getch.o

game_manual.o : game_manual.c
	gcc -c -g game_manual.c -I../include -o game_manual.o

getch.o : getch.c
	gcc -c -g getch.c -I../include -o getch.o

map.o : map.c
	gcc -c -g map.c -I../include -o map.o

display_menu.o : display_menu.c
	gcc -c -g display_menu.c -I../include -o display_menu.o

clean :
	rm *.o libfuncs.a
