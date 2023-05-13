#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int a, b, c, d = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
			_putchar(' ');

		for (c = 0; c < d; c++)
			_putchar('#');
		d++;
		_putchar('\n');
	}
}
