libfuncs.a: map.o display_menu.o game_manual.o getch.o gotoxy.o game_person.o com1.o
	ar rv libfuncs.a map.o display_menu.o game_manual.o getch.o gotoxy.o game_person.o com1.o

game_person.o: game_person.c
	gcc -c -g game_person.c -I../include -o game_person.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -o com1.o

gotoxy.o: gotoxy.c
	gcc -c -g gotoxy.c -I../include -o gotoxy.o

game_manual.o: game_manual.c
	gcc -c -g game_manual.c -I../include -o game_manual.o

map.o: map.c
	gcc -c -g map.c -I../include -o map.o

display_menu.o: display_menu.c
	gcc -c -g display_menu.c -I../include -o display_menu.o

getch.o: getch.c
	gcc -c -g getch.c -I../include -o getch.o

clean:
	rm *.o libfuncs.a
