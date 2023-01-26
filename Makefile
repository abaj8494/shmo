CC = gcc
CFLAGS = -g -Wall

shmo: main.c operations.c main.h
	$(CC) $(CFLAGS) main.c operations.c -o shmo

.PHONY: clean

clean:
	-rm -f shmo


