#include "main.h"

/**
 * _memset - filling the memory with a constant byte.
 *
 * @s: Pointer
 * @b: Array
 * @n: size
 *
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
