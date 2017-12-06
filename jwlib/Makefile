libjiwoofuncs.a: game_person.o istherewinner.o map_modify.o mapinfoclean.o selectplayer.o com2.o usrputstone.o computstone.o makeatvaluemap.o makedfvaluemap.o findlargestatvalue.o findlargestdfvalue.o valueclear.o check44.o
	ar rv libjiwoofuncs.a game_person.o istherewinner.o map_modify.o mapinfoclean.o makedfvaluemap.o makeatvaluemap.o findlargestdfvalue.o findlargestatvalue.o selectplayer.o com2.o usrputstone.o computstone.o valueclear.o check44.o

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

clean:
	rm *.o libjiwoofuncs.a
