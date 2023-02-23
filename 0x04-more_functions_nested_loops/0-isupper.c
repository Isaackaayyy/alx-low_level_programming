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
