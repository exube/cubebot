CC=gcc
CARGS=
LARGS=
OUT=cubebot
LIBS=
OBJFILES=main.o user.o

all: main user
	gcc ${CARGS} ${LIBS} -o ${OUT} ${OBJFILES}

main: 
	gcc ${LARGS} -c main.c

user:
	gcc ${LARGS} -c user.c 

clean:
	rm -rf ${OBJFILES} ${OUT}
