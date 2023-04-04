#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *m = head;

	while (head != NULL)
	{
		head = head->next;
		free(m);
	}
	free(head);
}
