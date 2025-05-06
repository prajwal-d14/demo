 Numops.exe: big3.o fact.o nnum.o
	gcc -o Numops.exe big3.o fact.o nnum.o
 big3.o:big3.c
	gcc -c big3.c
 fact.0:fact.c
	gcc -c fact.c
 nnum.o:nnum.c
	gcc -c nnum.c
