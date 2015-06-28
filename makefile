CC=gcc
CFLAGS=-I.
DEPS = STRING_IO.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o STRING_IO.o 
	gcc -o main main.o STRING_IO.o -I.