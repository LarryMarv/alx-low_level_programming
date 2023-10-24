#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: the listint_t list to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;/*head points to next*/
		/*and next holds the address of the next node*/
		free(head);
		head = temp;
	}
}
