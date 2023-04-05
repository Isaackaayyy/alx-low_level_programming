#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Pointer to the nth node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *m = head;
	unsigned int c = 0;

	if (m == NULL)
		return (NULL);

	while (m != NULL)
	{
		if (c < index)
		{
			m = m->next;
			index++;
		}
	}
	return (m);
}
