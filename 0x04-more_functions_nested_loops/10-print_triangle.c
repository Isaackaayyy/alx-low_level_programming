#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}
}
