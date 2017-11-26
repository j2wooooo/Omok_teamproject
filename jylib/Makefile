
libjiwoofuncs.a: com1.o checkblack.o mode.o
	ar rv libjyfuncs.a com1.o checkblack.o mode.o

mode.o: mode.c
	gcc -c -g mode.c -I../include -o mode.o

checkblack.o: checkblack.c
	gcc -c -g checkblack.c -I../include -o checkblack.o

com1.o: com1.c
	gcc -c -g com1.c -I../include -o com1.o

clean:
	rm *.o libjyfuncs.a

