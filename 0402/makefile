app.out: hello.o world.o main.o
	gcc -o app.out hello.o world.o main.o

hello.o: hello.h hello.c
	gcc -c -o hello.o hello.c

world.o: world.h world.c
	gcc -c -o world.o world.c

main.o: hello.h world.h main.c
	gcc -c -o main.o main.c

<target> : <prerequisites>
	<recipe>


