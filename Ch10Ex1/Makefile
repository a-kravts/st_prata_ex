CC = gcc
CFLAGS = -Wall -g

function_1.o:	function_1.c function_1.h
				$(CC) $(CFLAGS) -c $<
function_2.o:	function_2.c function_2.h
				$(CC) $(CFLAGS) -c $<
Ch10Ex1:		Ch10Ex1.c function_1.o function_2.o
				$(CC) $(CFLAGS) $^ -o $@ 
