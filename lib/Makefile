OBJFILES = map.o display_menu.o game_manual.o getch.o gotoxy.o com1.o whofirst.o check33.o check444.o usrput.o usrput2.o checkblack.o checkwhite.o whitemap.o mode.o attack.o defend.o winner.o winner2.o game_person.o istherewinner.o map_modify.o mapinfoclean.o selectplayer.o com2.o usrputstone.o computstone.o makeatvaluemap.o makedfvaluemap.o findlargestatvalue.o findlargestdfvalue.o valueclear.o check44.o com3.o

libfuncs.a: $(OBJFILES)
	ar rv libfuncs.a $(OBJFILES)

com3.o: com3.c
	gcc -c -g com3.c -I../include -o com3.o

com2.o: com2.c
	gcc -c -g com2.c -I../include -I../jwinclude -o com2.o

check44.o: check44.c
	gcc -c -g check44.c -I../jwinclude -o check44.o

usrputstone.o: usrputstone.c
	gcc -c -g usrputstone.c -I../include -I../jwinclude -o usrputstone.o

computstone.o: computstone.c
	gcc -c -g computstone.c -I../include -I../jwinclude -o computstone.o

valueclear.o: valueclear.c
	gcc -c -g valueclear.c -I../jwinclude -o valueclear.o

makedfvaluemap.o: makedfvaluemap.c
	gcc -c -g makedfvaluemap.c -I../include -I../jwinclude -o makedfvaluemap.o

makeatvaluemap.o: makeatvaluemap.c
	gcc -c -g makeatvaluemap.c -I../include -I../jwinclude -o makeatvaluemap.o

findlargestdfvalue.o: findlargestdfvalue.c
	gcc -c -g findlargestdfvalue.c -I../include -I../jwinclude -o findlargestdfvalue.o

findlargestatvalue.o: findlargestatvalue.c
	gcc -c -g findlargestatvalue.c -I../include -I../jwinclude -o findlargestatvalue.o

selectplayer.o: selectplayer.c
	gcc -c -g selectplayer.c -I../include -o selectplayer.o

mapinfoclean.o: mapinfoclean.c
	gcc -c -g mapinfoclean.c -I../include -I../jwinclude -o mapinfoclean.o

game_person.o: game_person.c
	gcc -c -g game_person.c -I../include -I../jwinclude -o game_person.o

istherewinner.o: istherewinner.c
	gcc -c -g istherewinner.c -I../include -I../jwinclude -o istherewinner.o

map_modify.o: map_modify.c
	gcc -c -g map_modify.c -I../include -I../jwinclude -o map_modify.o

winner2.o: winner2.c
	gcc -c -g winner2.c -I../include -o winner2.o

winner.o: winner.c
	gcc -c -g winner.c -I../include -o winner.o

defend.o: defend.c
	gcc -c -g defend.c -I../include -o defend.o

attack.o: attack.c
	gcc -c -g attack.c -I../include -o attack.o

mode.o: mode.c
	gcc -c -g mode.c -I../include -o mode.o

whitemap.o: whitemap.c
	gcc -c -g whitemap.c -I../include -o whitemap.o

checkwhite.o: checkwhite.c
	gcc -c -g checkwhite.c -I../include -o checkwhite.o

checkblack.o: checkblack.c
	gcc -c -g checkblack.c -I../include -o checkblack.o

usrput2.o: usrput2.c
	gcc -c -g usrput2.c -I../include -o usrput2.o

usrput.o: usrput.c
	gcc -c -g usrput.c -I../include -o usrput.o

check444.o: check444.c
	gcc -c -g check444.c -I../include -o check444.o

check33.o: check33.c
	gcc -c -g check33.c -I../include -o check33.o

whofirst.o: whofirst.c
	gcc -c -g whofirst.c -I../include -o whofirst.o

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
