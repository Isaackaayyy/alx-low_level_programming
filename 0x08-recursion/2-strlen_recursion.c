#include "main.h"

/**
 * _strlen_recursion - Find the length of the string using recursion
 *
 * @s: String
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int c;

	if (s == '\0')
		return (0);

	c = 1 + _strlen_recursion(s + 1);
	return (c);
}
