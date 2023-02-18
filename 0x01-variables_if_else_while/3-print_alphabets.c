#include <stdio.h>

/**
 * main - eentry point
 *
 * Description: print alphabets in lowercase and uppercase and new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
