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
	int m;
	int n;
	int o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 1; n <= 9; n++)
		{
			for (o = 2; o <= 9; o++)
			{

					putchar(m);
					putchar(n);
					putchar(o);
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);

					if (m == 7 && n == 8 && o == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
