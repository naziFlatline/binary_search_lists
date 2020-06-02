#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node* next;
}node_t;


node_t* init_list(int val);
void push(node_t**,int);
void begin_push(node_t**,int);
void print_list(node_t*);
int find_element(node_t*,int);

