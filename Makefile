binary: main.o liblist.a
	gcc -o search_in_list main.o -L. -llist

main.o: main.c
	gcc -c main.c

list.o : ./lib/list.c
	gcc -c ./lib/list.c

liblist.a: ./lib/list.o
	ar rc liblist.a ./lib/list.o

clear:
	rm *.o *.a search_in_list ./lib/*.o
