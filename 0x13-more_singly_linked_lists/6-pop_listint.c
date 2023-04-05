#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Pointer  to pointer of the head node
 * Return: data in the head node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *m;

	if (*head == NULL)
		return (0);


	m = *head;

	*head = (*head)->next;

	n = m->n;

	free(m);

	return (n);
}
