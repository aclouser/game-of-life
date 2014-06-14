CC=g++

all: life

life: main.o
	$(CC) main.o -o life

main.o: main.cc
	$(CC) -c main.cc
