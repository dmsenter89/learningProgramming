# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall

all: logger

logger: main.o log.o
	$(CC) main.o log.o -o logger

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

log.o: log.cpp
	$(CC) $(CFLAGS) log.cpp

clean:
	rm -rf *o logger
