#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index of the list
 * @head: head node
 * @index: deisred index
 * Return: 1 on success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *crnt_node = *head;
	unsigned int current_index = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(crnt_node);

		return (1);
	}

	while (crnt_node != NULL)
	{
		if (crnt_index == index)
		{
			if (crnt->next != NULL)
				 crnt_node->next->prev = crnt_node->prev;
			if (crnt_node->prev != NULL)
				crnt_node->prev->next = crnt_node->next;
			free(crnt_node);
			return (1);
		}
		crnt_node = crnt_node->next;
		crnt_index++;
	}

	return (-1);
}
