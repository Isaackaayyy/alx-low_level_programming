#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Pointer function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: Pointer function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;
	if (size <= 0)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
			return (c);
	}
	return (0);
}
