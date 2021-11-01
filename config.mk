# paths
PREFIX = /usr/local
MANPREFIX = ${PREFIX}/share/man
LIBS = -lGL -lGLU -lglut -lX11 -lpthread -lXrandr -lXi -ldl

# flags
CPPFLAGS = -D_DEFAULT_SOURCE
CFLAGS   = -g -std=c99 -pedantic -Wall -Os ${CPPFLAGS}
LDFLAGS  = ${LIBS}

CC = cc
