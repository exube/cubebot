CC=g++
CARGS=
LARGS=
OUT=cubebot
LIBS=
OBJFILES=main.o user.o

all: main user
	${CC} ${CARGS} ${LIBS} -o ${OUT} ${OBJFILES}

main: 
	${CC} ${LARGS} -c main.cpp

user:
	${CC} ${LARGS} -c user.cpp 

clean:
	rm -rf ${OBJFILES} ${OUT}
