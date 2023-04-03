#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to pointer of the head of  the node
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	listint_t *m;
	size_t node = 0;

	m = h;
	while (m != NULL)
	{
		node++;
		m = m->next;
	}
	return (node);
}
