#include "main.h"

/**
 *
 *
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i =0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (i == 0 && j == 0)
					_putchar(k);
				else if (k == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
				}
				if (k > 9 && k <= 99)
				{
					_putchar('0');
					_putchar('0');
					_putchar('0');
				}
			}
		}
	}
	return;
}
