OBJFILES = com1.o whofirst.o usrput.o checkblack.o checkwhite.o whitemap.o mode.o attack.o defend.o winner.o

libjyfuncs.a: $(OBJFILES)
	ar rv libjyfuncs.a $(OBJFILES)

winner.o: winner.c
	gcc -c -g winner.c -I../include -I../jyinclude -o winner.o

defend.o: defend.c
	gcc -c -g defend.c -I../include -I../jyinclude -o defend.o

attack.o: attack.c
	gcc -c -g attack.c -I../include -I../jyinclude -o attack.o

mode.o: mode.c
	gcc -c -g mode.c -I../include -I../jyinclude -o mode.o

whitemap.o: whitemap.c
	gcc -c -g whitemap.c -I../include -I../jyinclude -o whitemap.o

checkwhite.o: checkwhite.c
	gcc -c -g checkwhite.c -I../include -I../jyinclude -o checkwhite.o

checkblack.o: checkblack.c
	gcc -c -g checkblack.c -I../include -I../jyinclude -o checkblack.o

usrput.o: usrput.c
	gcc -c -g usrput.c -I../include -I../jyinclude -o usrput.o

whofirst.o: whofirst.c
	gcc -c -g whofirst.c -I../include -I../jyinclude -o whofirst.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -I../jyinclude -o com1.o

clean:
	rm *.o libjyfuncs.a

