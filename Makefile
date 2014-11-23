mktex: mktex.o
	gcc -Wall mktex.o -o mktex

mktex.o: mktex.c
	gcc -Wall -c mktex.c

.PHONY: clean purge

clean:
	rm -f mktex.o

purge:
	rm -f mktex.o mktex
