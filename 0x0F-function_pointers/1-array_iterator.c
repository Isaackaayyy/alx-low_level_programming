#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size
 * @action: Pointer funcrion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;
	(void)size;

	if (action == NULL)
		return;

	for (c = 0; c < 5; c++)
		action(array[c]);
}
