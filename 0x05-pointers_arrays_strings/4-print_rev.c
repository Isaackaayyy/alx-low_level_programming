#include "main.h"
#include <string.h>

/**
 * print_rev - reverse a string
 *
 * @s: string
 *
 * Return
 */

void print_rev(char *s)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
