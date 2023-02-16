
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

maximum-subarray: maximum-subarray.o
	$(CC) $(CFLAGS) -o maximum-subarray maximum-subarray.o

maximum-subarray.o: maximum-subarray.cpp
	$(CC) $(CFLAGS) -c maximum-subarray.cpp

clean:
	rm -rf maximum-subarray maximum-subarray.o
