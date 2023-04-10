#include "main.h"

/**
 * binary_to_uint - converting a binary number to an unsigned int
 * @b: pointer to the string of numbers
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, l = 0, c;

	if (!b)
		return (0);

	l = strlen(b);

	for (c = 0; c < l; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		x <<= 1;
		if (b[c] == '1')
			x += 1;
	}
	return (x);
}
