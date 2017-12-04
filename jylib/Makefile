OBJFILES = com1.o checkblack.o mode.o attack.o
libjyfuncs.a: $(OBJFILES)
	ar rv libjyfuncs.a $(OBJFILES)

attack.o: attack.c
	gcc -c -g attack.c -I../include -I../jyinclude -o attack.o

mode.o: mode.c
	gcc -c -g mode.c -I../include -I../jyinclude -o mode.o

checkblack.o: checkblack.c
	gcc -c -g checkblack.c -I../include -I../jyinclude -o checkblack.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -I../jyinclude -o com1.o

clean:
	rm *.o libjyfuncs.a

