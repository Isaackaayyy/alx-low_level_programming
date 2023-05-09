#include <stdio.h>

/**
 * main - entry point
 * Description: print all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m <= 7; m++)
	{
		for (n = m + 1; n <= 8; n++)
		{
			for (o = n + 1; o <= 9; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');

					if (m == 7 && n == 8 && o == 9)
						break;
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
