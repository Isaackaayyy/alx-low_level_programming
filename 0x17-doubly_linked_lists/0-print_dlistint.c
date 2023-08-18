#include "lists.h"


/**
 * print_dlistint - A function that prints all elements of a dlistint_t list
 * @h: paramter passed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_node++;
	}

	return (no_of_node);
}
