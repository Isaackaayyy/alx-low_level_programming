#include "main.h"

/**
* puts_half - Prints half od a string, followed by a nwe line
* @str: the string
*/

void puts_half(char *str)
{
	int c = 0, _strlen, half, k;

	while (str[c] != '\0')
		c++;

	_strlen = c - 1;

	if (c % 2 == 0)
	{
		half = c / 2;
		for (k = half; k <= _strlen; k++)
			_putchar(str[k]);
	}
	else
	{
		half = (c + 1) / 2;
		for (k = half; k <= _strlen; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
