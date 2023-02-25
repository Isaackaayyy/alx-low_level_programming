#include "main.h"

/**
 * print_diagonal - function that prints a square, followed by a new line
 *
 * Description: function that print
 *
 * @n: omo free me
 *
 * Return: int
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
