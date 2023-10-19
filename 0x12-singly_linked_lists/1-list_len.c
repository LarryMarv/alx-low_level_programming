#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* list_len - returns the number of elements in a list
* @h: pointer to the list
* Return: the number of elements.
*/
size_t list_len(const list_t *h)
{
	int no_nodes = 0;

	while (h)
	{
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
