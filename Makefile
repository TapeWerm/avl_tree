CC=g++
CFLAGS= -g -Wall
PROGS= avl_tree

all: $(PROGS)

avl_tree: avl_tree.cpp avl_tree.h avl_node.o
	$(CC) $(CFLAGS) $^ -o $@

zip:
	zip avl_tree.zip *

clean:
	rm -f $(PROGS) avl_tree.zip
