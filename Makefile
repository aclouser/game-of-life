CC=g++ -std=c++0x

all: life

life: main.o cell.o
	$(CC) main.o cell.o -o life

main.o: main.cc 
	$(CC) -c main.cc

cell.o: cell.cc cell.h
	$(CC) -c cell.cc -o cell.o
