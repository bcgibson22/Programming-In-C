HEADERS=fsupport.h phone.h
OBJECTS=fsupport.o phonebk_strtok.o
CC=gcc
CFLAGS=-ansi -Wall -pedantic
LFLAGS=

all:phonebk

phonebk: fsupport.o phonebk_strtok.o
	$(CC) $(LFLAGS) $^ -o phonebk
%.o:%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

debug:CFLAGS+=-g
debug:clean all

sanitize:CFLAGS+=-g -fsanitize=address
sanitize:LFLAGS+=-fsanitize=address
sanitize:clean all

.PHONY:clean
clean:
	rm -f phonebk *.o
zip:	
	zip -r assessedlabs22014 *.c *.h Makefile solution
