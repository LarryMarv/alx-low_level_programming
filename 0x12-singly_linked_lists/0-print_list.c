#include "lists.h"

/**
* print_list - Prints all elements
* @h: Singly list
* Return: The number of nodes and length and elements
*/

size_t print_list(const list_t *h)
{
	int no_nodes;

	no_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
