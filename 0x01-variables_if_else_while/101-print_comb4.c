#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int m, n, o;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			for (o = 0; o < 100; o++)
			{
				putchar('m');
				putchar('n');
				putchar('o');


			}
		}
	}

	return (0);
}
