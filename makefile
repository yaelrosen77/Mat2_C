CC = gcc
FLAGS = -Wall -g -fPIC
ARCS = ar -rcs
OBJECT_LIB = libmy_mat.so
OBJECT_MAIN = main.o


connections: $(OBJECT_MAIN) $(OBJECT_LIB)
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN) ./$(OBJECT_LIB)

libmy_mat.so: my_mat.o
	$(CC) $(FLAGS) -shared -o $(OBJECT_LIB) my_mat.o

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY:clean

clean:
	rm -f libmy_mat.so *.o connections
