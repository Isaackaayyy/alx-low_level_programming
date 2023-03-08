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
	int l = 0;
	int i = 0;

	if (s[i] == '\0')
		return (l);
	l++;

	_strlen_recursion(s + 1);
	return (l);
}
