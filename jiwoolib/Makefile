libjiwoofuncs.a: game_person.o istherewinner.o map_modify.o mapinfoclean.o selectplayer.o com2.o usrputstone.o computstone.o
	ar rv libjiwoofuncs.a game_person.o istherewinner.o map_modify.o mapinfoclean.o selectplayer.o com2.o usrputstone.o computstone.o

com2.o: com2.c
	gcc -c -g com2.c -I../include -o com2.o

usrputstone.o: usrputstone.c
	gcc -c -g usrputstone.c -I../include -o usrputstone.o

computstone.o: computstone.c
	gcc -c -g computstone.c -I../include -o computstone.o

selectplayer.o: selectplayer.c
	gcc -c -g selectplayer.c -I../include -o selectplayer.o

mapinfoclean.o: mapinfoclean.c
	gcc -c -g mapinfoclean.c -I../include -o mapinfoclean.o

game_person.o: game_person.c
	gcc -c -g game_person.c -I../include -o game_person.o

istherewinner.o: istherewinner.c
	gcc -c -g istherewinner.c -I../include -o istherewinner.o

map_modify.o: map_modify.c
	gcc -c -g map_modify.c -I../include -o map_modify.o

clean:
	rm *.o libjiwoofuncs.a
