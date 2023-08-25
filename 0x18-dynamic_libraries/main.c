#include <stdio.h>
#include "main.h"


/**
 ** _putchar - writes the character c to stdout
 ** @c: The character to print
 **
 ** Return: On success 1.
 ** On error, -1 is returned, and errno is set appropriately.
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _islower - check for lowercase character
 * @c: first value
 *
 * Return: on succes 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


/**
 * _isalpha - checks for alphabetic character
 *
 * @c: first value
 *
 * Return: On success 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}



/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @n: first value
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

