#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line
 *
 * @s: String
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(1 + s);
		_putchar(*s);
	}
}
