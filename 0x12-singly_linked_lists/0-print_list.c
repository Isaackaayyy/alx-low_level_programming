#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: Passed parameter
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (h->str == NULL)
		printf("[0] (nil)");

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	printf("%s", h->str);
	return (c);
}
