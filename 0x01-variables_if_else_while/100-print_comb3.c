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
	int n;

	for (n = 1; n < 100; n++)
	{
		putchar(n + '1');
	}
	return (0);
}
