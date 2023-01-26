RM_OBJ = rm -f *.o
CC = gcc
FLAGS = -c

all:
	${RM_OBJ}
	${CC} ${FLAGS} *.c
	${CC} -o main *.o

clean:
	${RM_OBJ}

compile:
	${CC} ${FLAGS} *.c

link:
	${CC} -o main *.o