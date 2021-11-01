include config.mk

SRC = demoscene.c
OBJ = ${SRC:.c=.o}

all: demoscene

.c.o:
	${CC} -c ${CFLAGS} $<

${OBJ}: config.mk

demoscene: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	rm -f demoscene ${OBJ}

.PHONY: all clean
