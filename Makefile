CFLAGS=-std=c11 -g -static

nova: nova.c

test: nova
	./test.sh

clean:
	rm -f nova *.o *~ tmp*

.PHONY: test clean