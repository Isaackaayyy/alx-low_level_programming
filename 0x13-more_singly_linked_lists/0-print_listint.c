#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to pointer of the head of the list listint_t.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *m;
	size_t node = 0;

	m = h;
	while (m != NULL)
	{
		printf("%d\n", m->n);
		node++;
		m = m->next;
	}
	return (node);
}
