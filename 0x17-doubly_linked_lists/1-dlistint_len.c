#include "lists.h"


/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: passed parameter
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_node = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_node++;
	}

	return (no_of_node);
}
