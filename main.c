#include "lib/list.h"
int main()
{
	node_t* head;
	begin_push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	begin_push(&head,1);
	print_list(head);
	printf("Find 10 - position %d\n",find_element(head,10));
	printf("Find 3 - position %d\n",find_element(head,3));
	return 0;
}
