#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: Min parameter
 * @max: Max peremeter
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int s, c, i;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		a[i] = c;
		c++;
	}

	return (a);
}
