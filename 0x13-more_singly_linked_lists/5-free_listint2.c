#include "lists.h"

/**
 * free_listint2 - free the list and head
 * @head: Pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *m, *new_node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		m = *head;
		new_node = m->next;
		free(m);
		m = new_node;
	}
	*head = NULL;
}
