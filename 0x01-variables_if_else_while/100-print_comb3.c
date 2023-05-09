#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = 1; m < 10; m++)
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
