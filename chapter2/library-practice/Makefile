CC = gcc
CFLAGS = -Wall -Wextra

program: main.o libmath.a
	$(CC) main.o -L. -lmath -o program

main.o: main.c math.h
	$(CC) $(CFLAGS) -c main.c

math.o: math.c math.h
	$(CC) $(CFLAGS) -c math.c

libmath.a: math.o
	ar rcs libmath.a math.o

clean:
	rm -f *.o *.a program