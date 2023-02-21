#include "main.h"

/**
 * _islower - check for lowercase character
 *@c: first value
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
