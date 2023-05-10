#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j > 0)
				_putchar(' ');

			if (k < 10 && j > 0)
				_putchar(' ');

			if (k < 100)
				_putchar(' ');

			if (k >= 100)
				_putchar((k / 100) % 10 + '0');

			if (k >= 10)
				_putchar((k / 10) % 10 + '0');

			_putchar(k % 10 + '0');

			if (j < n)
				_putchar(',');
		}
        }
	_putchar('\n');
}
