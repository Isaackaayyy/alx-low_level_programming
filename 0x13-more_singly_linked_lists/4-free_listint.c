#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head != NULL)
	{
		m = head;
		head = head->next;
		free(m);
	}
	free(head);
}
