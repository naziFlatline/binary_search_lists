#include <stdio.h>
#include <stdlib.h>


typedef struct node{
		int data;
		struct node* next;
}node_t;


node_t* init_list(int val);
void push(node_t**,int);
void print_list(node_t*);

int main()
{
		node_t* head;
		push(&head,3);
		push(&head,4);
		push(&head,5);
		print_list(head);
		return 0;
}

node_t* init_list(int val)
{
		node_t* current = malloc(sizeof(node_t));
		if(current!=NULL)
		{		current->data = val;
				current->next = NULL;
				return current;
		}
		return current;
}

void push(node_t** head,int val)
{
		node_t* current = *head;

		if(current == NULL)
		{
				*head =  init_list(val);
				return;
		}

		while(current->next != NULL)
				current = current->next;

		current->next = malloc(sizeof(node_t));
		current->next->data = val;
		current->next->next = NULL;
}

void

void print_list(node_t* head)
{
		node_t* current = head;
		while(current!=NULL)
		{
				printf("%d->",current->data);
				current=current->next;
		}
		printf("NULL\n");
}
