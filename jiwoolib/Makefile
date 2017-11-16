libjiwoofuncs.a: game_person.o istherewinner.o map_modify.o
	ar rv libjiwoofuncs.a game_person.o istherewinner.o map_modify.o

game_person.o: game_person.c
	gcc -c -g game_person.c -I../include -o game_person.o

istherewinner.o: istherewinner.c
	gcc -c -g istherewinner.c -I../include -o istherewinner.o

map_modify.o: map_modify.c
	gcc -c -g map_modify.c -I../include -o map_modify.o

clean:
	rm *.o libjiwoofuncs.a
