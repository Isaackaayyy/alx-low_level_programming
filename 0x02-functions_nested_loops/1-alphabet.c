#include "main.h"

/**
 * main - entry point
 *
 * Description: Write a function that prints the alphabet
 *
 * Rrturn: Always 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	return (0);
}
