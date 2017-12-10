libfuncs.a: map.o display_menu.o game_manual.o getch.o gotoxy.o
	ar rv libfuncs.a map.o display_menu.o game_manual.o getch.o gotoxy.o

gotoxy.o: gotoxy.c
	gcc -c -g gotoxy.c -I../../include/jjinclude -o gotoxy.o

game_manual.o: game_manual.c
	gcc -c -g game_manual.c -I../../include/jjinclude -o game_manual.o

map.o: map.c
	gcc -c -g map.c -I../../include/jjinclude -o map.o

display_menu.o: display_menu.c
	gcc -c -g display_menu.c -I../../include/jjinclude -o display_menu.o

getch.o: getch.c
	gcc -c -g getch.c -I../../include/jjinclude -o getch.o

clean:
	rm *.o libfuncs.a
