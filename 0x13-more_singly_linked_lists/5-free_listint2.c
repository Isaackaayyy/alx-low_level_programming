#include "lists.h"

/**
 * free_listint2 - free the list and head
 * @head: Pointer to the first node
 */

void free_listint2(listint_t **head)
{
	while (head != NULL)
	{
		*head = (*head)->next;
		(*head)->next = NULL;
	}
}
