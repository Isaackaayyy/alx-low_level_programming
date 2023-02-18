#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		(x = 'a'; x <= 'f'; x++)
		{
			putchar(x);
		}

	putchar('\n');

	return (0);
}
