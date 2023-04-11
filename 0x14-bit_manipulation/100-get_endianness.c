#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 on success or 0 on failure
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}
