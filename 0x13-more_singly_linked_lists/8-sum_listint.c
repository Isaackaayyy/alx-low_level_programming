#include "lists.h"

/**
 * sum_listint - sum all value in a linked list
 * @head: Pointer to the first node
 * Return: sum of all values of the lis or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *m = head;
	int sum = 0;

	if (m == NULL)
		return (0);


	while (m != NULL)
	{
		sum += m->n;
		m = m->next;
	}
	return (sum);
}
