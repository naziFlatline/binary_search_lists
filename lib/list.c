#include "list.h"

node_t* init_list(int val)
{
	node_t* current = malloc(sizeof(node_t));
	if(current!=NULL)
	{	
		current->data = val;
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

void begin_push(node_t** head, int val)
{
	node_t* tmp_node;
		
	if(head == NULL)
	{
		*head = init_list(val);
		return;
	}
	tmp_node = init_list(val);
	tmp_node->next =*head;
	*head = tmp_node;
}

void print_list(node_t* head)
{
	node_t* current = head;
	while(current!=NULL)
	{
	printf("%d->",current->data);
	current = current->next;
	}
	printf("NULL\n");
}



int find_element(node_t* head,int value)
{
	node_t* current = head;
	int index = 0;

	while (current != NULL && current->data != value)
	{
		index++;
		current=current->next;
	}
	return (current == NULL) ? -1 : index+1 ;
}
