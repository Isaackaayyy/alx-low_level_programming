#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head node
 * @index: index of the node
 * Return: node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int crnt_index = 0;
	dlistint_t *crnt_node = head;

	while (crnt_node != NULL)
	{
		if (crnt_index == index)
			return (crnt_node);

		crnt_node = crnt_node->next;
		crnt_index++;
	}

	return (NULL);
}
