#include "lists.h"

/**
 * sum_listint - sum all value in a linked list
 * @head: Pointer to the first node
:x
 */

int sum_listint(listint_t *head)
{
	listint_t *m = head;
	int c = 0, n;

	if (m == NULL)
		return (0);


	while (m != NULL)
	{
		n = m->n;
		n += n;
		c++;
	}
	return (n);
}
