#include "lists.h"

/**
 * sum_listint - sum all value in a linked list
 * @head: Pointer to the first node
:x
 */

int sum_listint(listint_t *head)
{
	listint_t *m = head;
	int n, sum;

	if (m == NULL)
		return (0);


	while (m != NULL)
	{
		n = m->n;
		sum += n;
		m = m->next;
	}
	return (n);
}
