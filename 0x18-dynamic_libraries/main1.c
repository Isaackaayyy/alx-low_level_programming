#include "main.h"


/**
 * _isupper -  for uppercase character.
 *
 * @c: first character
 *
 * Return: Int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: first value
 * Return: Always 1
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <=  '9'))
		return (1);
	else
		return (0);
}


/**
 * _strlen - length of a string
 * @s: first value
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * _puts - display
 * @str: string to be displayed
 * Return: string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
