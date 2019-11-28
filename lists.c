#include "stdio.h"


struct node_t {
	int value;
	struct node_t *next;
};


int main()
{

	// Односвязный список

	struct node_t *node;

	struct node_t new_node;

	new_node.value = 1;
	new_node.next = NULL;

	node = &new_node;

	struct node_t new_node1;

	new_node1.value = 3;
	new_node1.next = NULL;

	node->next = &new_node1;


	struct node_t new_node2;

	new_node2.value = 6;
	new_node2.next = NULL;

	new_node1.next = &new_node2;

	while (node != NULL)
	{
		printf("%d\n", node->value);
		node = node->next;
	}


	return 0;
}