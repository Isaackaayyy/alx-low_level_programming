#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - free pointer to array
* @grid: pointer to array
* @height: height of array
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (height > 0)
	{
		free(grid[i]);
		i++;
		height--;
	}

	free(grid);
}
