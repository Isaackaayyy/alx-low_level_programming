#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of the list
 * @head: head
 * @n: value
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *m;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->
	m = *head;
	m = m->next;
	while (m != NULL)
	{
		m = m->next;
		if (m == NULL)
		{
			new_node->n = n;
			new_node->next = m;
			m = new_node;
		}
	}
	return (new_node);
}
