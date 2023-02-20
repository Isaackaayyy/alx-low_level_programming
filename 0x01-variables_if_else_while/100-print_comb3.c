#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');

			putchar(',');
			putchar(' ');

		}
	}
	return (0);
}
