CC = gcc
CFLAGS = -Wall -Wextra -O2

all: scm.c
	$(CC) $(CFLAGS) -o scm_bin scm.c

run: scm_bin
	./scm_bin

clean: 
	rm -rf ./scm_bin