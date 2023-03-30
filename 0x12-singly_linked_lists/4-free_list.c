#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a lsit
 * @head: Pointer to list
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
