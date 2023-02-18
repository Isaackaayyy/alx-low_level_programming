#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
