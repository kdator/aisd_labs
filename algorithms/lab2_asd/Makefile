# Use GCC compiler for building.
CC=g++
# The level variable contains flags that are passed to the compiler.
CFLAGS=-c -w -g

all: kruskal prim stack_and_rec

kruskal: kruskal.o KruskalMain.cpp
	$(CC) -w kruskal.o KruskalMain.cpp -o kruskal

kruskal.o:
	$(CC) $(CFLAGS) KruskalReal.cpp -o kruskal.o

prim: 
	$(CC) -w PrimsMethod.cpp -o prim 	

stack_and_rec: recurtion.o
	$(CC) -w recurtion.o rec_and_stack.cpp -o stack_and_rec

recurtion.o:
	$(CC) $(CFLAGS) RecurtionFunction.cpp	-o recurtion.o

clean:
	rm -rf *.o kruskal prim stack_and_rec