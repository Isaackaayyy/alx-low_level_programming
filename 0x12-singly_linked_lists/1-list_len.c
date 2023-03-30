#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: parameter passed
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
