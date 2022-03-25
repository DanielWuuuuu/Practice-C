 #[Makefile]
 

CFLAGS = -std=c99 -Wall -Wextra -O3
 
.PHONY : all clean


all:
	gcc $(CFLAGS) sample1.c -o sample1
	./sample1
 
clean:
	rm -f sample1
