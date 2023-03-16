#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - return pointer to 2D array of integers
* @width: width of array
* @height: height of arry
* Return: pointer to pointer
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));

	if (a == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	a[i] = malloc(width * sizeof(int));

	if (a[i] == NULL)
	{
		for (i--; i >= 0; i--)
			free(a[i]);
		free(a);
		return (NULL);
	}
	for (j = 0; j < width; j++)
		a[i][j] = 0;
	}

	return (a);
}
