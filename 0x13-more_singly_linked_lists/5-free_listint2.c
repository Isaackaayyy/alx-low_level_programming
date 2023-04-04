#include "lists.h"

/**
 * free_listint2 - free the list and head
 * @head: Pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *m;

	while (head != NULL)
	{
		m = *head;
		*head = (*head)->next;
		free(m);
		*head = NULL;
	}
}
