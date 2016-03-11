CC = gcc
CFLAGS = -Wall -g

all: generate examine

buildG: generate

buildE: examine

run: generateRun examineRun

examine: main.c main.h
	$(CC) $(CFLAGS) -fopenmp main.c main.h -o main.o

generate: generator.c generator.h
	$(CC) $(CFLAGS) generator.c generator.h -o generator.o

runE:
	./main.o -1 -1 datafile -1 -1

runG:
	./generator.o datafile 1500

clean:
	rm -rf *.o datafile
