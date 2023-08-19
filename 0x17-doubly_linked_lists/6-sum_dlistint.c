#include "lists.h"


/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: head node
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
