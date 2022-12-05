CC = gcc
FLAGS = -Wall -g -fPIC
OBJECT_LIB = libmy_mat.so
OBJECT_MAIN = main.o

all: connections libmy_mat.so $(OBJECT_MAIN) $(OBJECT_LIB)

connections: $(OBJECT_MAIN) $(OBJECT_LIB)
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN) ./$(OBJECT_LIB) -lm

libmy_mat.so: my_mat.o
	$(CC) $(FLAGS) -shared -o $(OBJECT_LIB) my_mat.o -lm

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm

.PHONY:clean all

clean:
	rm -f libmy_mat.so *.o connections