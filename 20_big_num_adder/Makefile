CC?=gcc-11
CFLAGS=-g -fsanitize=leak -fsanitize=address -fsanitize=undefined
SRC=$(wildcard *.c)
TARGET=$(patsubst %.c, %, $(SRC))

all: ${TARGET}
%:	%.c
	${CC} ${CFLAGS} $< -o $@

clean:
	rm ${TARGET}
