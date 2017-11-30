
libjiwoofuncs.a: *.o
	ar rv libjyfuncs.a *.o

attack.o: attack.c
	gcc -c -g attack.c -I../include -o attack.o

mode.o: mode.c
	gcc -c -g mode.c -I../include -o mode.o

checkblack.o: checkblack.c
	gcc -c -g checkblack.c -I../include -o checkblack.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -o com1.o

clean:
	rm *.o libjyfuncs.a

