program: main.o math.o
	gcc -o program main.o math.o

main.o: main.c math.h
	gcc -c main.c -o main.o

math.o: math.c math.h
	gcc -c math.c -o math.o

clean:
	rm -f *.o program