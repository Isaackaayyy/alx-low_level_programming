#include "lists.h"


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
