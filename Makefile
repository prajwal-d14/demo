 Numops.exe: big3.o fact.o nnum.o main.o
	gcc -o Numops.exe big3.o fact.o nnum.o main.o
 main.o:main.c
	gcc -c main.c 
 big3.o:big3.c
	gcc -c big3.c
 fact.0:fact.c
	gcc -c fact.c
 nnum.o:nnum.c
	gcc -c nnum.c
