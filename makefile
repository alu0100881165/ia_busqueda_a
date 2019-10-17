CC=g++

CFLAGS=-c

all: busqueda

busqueda: main.o graph_t.o node_t.o
					$(CC) main.o graph_t.o node_t.o -o busqueda

main.o: main.cpp
				$(CC) $(CFLAGS) main.cpp

graph_t.o: graph_t.cpp
				$(CC) $(CFLAGS) graph_t.cpp

node_t.o: node_t.cpp
				$(CC) $(CFLAGS) node_t.cpp

clean:
				rm -rf *o busqueda
