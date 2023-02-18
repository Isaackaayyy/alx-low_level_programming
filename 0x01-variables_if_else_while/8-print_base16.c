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
	int n;
	char i;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
