#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Pointer function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: Pointer function
 * Return: returns the index of the first element for which the cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size < -1)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
			return (c);
	}

	return (0);
}
