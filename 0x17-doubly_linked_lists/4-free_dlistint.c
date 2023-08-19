#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *crnt_node = head;

	while (crnt_node != NULL)
	{
		dlistint_t *next_node = crnt_node->next;

		free(crnt_node);
		crnt_node = next_node;
	}
}
