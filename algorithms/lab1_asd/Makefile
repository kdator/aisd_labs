# Use GCC compiler for building.
CC=g++
# The level variable contains flags that are passed to the compiler.
CFLAGS=-c -w -g

test: assembly

assembly: main.o interpolation_search.o check_call_parameters.o polar_rnd.o sortfunc.o
	$(CC) main.o interpolation_search.o check_call_parameters.o polar_rnd.o sortfunc.o -o test -lm

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

interpolation_search.o: interpolation_search.cpp
	$(CC) $(CFLAGS) interpolation_search.cpp

check_call_parameters.o: check_call_parameters.c
	$(CC) $(CFLAGS) check_call_parameters.c

polar_rnd.o: polar_rnd.cpp
	$(CC) $(CFLAGS) polar_rnd.cpp

sortfunc.o: sortfunc.cpp
	$(CC) $(CFLAGS) sortfunc.cpp

clean:
	rm -rf *.o test