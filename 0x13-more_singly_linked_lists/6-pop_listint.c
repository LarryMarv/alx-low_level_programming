#include "lists.h"

/**
 *  pop_listint- adds node on the head and makes it head
 *  @head: head of the list
 * Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	i = *head;
	*head =  i->next;
	n = i->n;
	free(i);
	return (n);
}
