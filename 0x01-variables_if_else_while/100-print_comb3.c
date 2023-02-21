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

	for (n = '0'; n < 10; n++)
	{
		for (m = '1'; m < 10; m++)
		{

			if (n < m)
			{
				putchar(n);
				putchar(m);

				if (n == '8' && m == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
