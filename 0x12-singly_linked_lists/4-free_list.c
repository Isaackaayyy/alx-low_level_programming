#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a lsit
 * @head: Pointer to list
 */

void free_list(list_t *head)
{
		head = head->next;
		free(head);
}
