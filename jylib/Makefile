OBJFILES = com1.o whofirst.o check33.o check44.o usrput.o usrput2.o checkblack.o checkwhite.o whitemap.o mode.o attack.o defend.o winner.o winner2.o com3.o

libjyfuncs.a: $(OBJFILES)
	ar rv libjyfuncs.a $(OBJFILES)

com3.o: com3.c
	gcc -c -g com3.c -I../include -I../jyinclude -o com3.o

winner2.o: winner2.c
	gcc -c -g winner2.c -I../include -I../jyinclude -o winner2.o

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

usrput2.o: usrput2.c
	gcc -c -g usrput2.c -I../include -I../jyinclude -o usrput2.o

usrput.o: usrput.c
	gcc -c -g usrput.c -I../include -I../jyinclude -o usrput.o

check44.o: check44.c
	gcc -c -g check44.c -I../include -I../jyinclude -o check44.o

check33.o: check33.c
	gcc -c -g check33.c -I../include -I../jyinclude -o check33.o

whofirst.o: whofirst.c
	gcc -c -g whofirst.c -I../include -I../jyinclude -o whofirst.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -I../jyinclude -o com1.o

clean:
	rm *.o libjyfuncs.a

