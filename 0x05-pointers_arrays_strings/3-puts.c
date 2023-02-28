#include "main.h"
#include <stdio.h>

/**
 * _puts - display
 *
 * @str: string to be displayed
 *
 * Return: string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
