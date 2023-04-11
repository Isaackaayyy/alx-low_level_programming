#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index
 * @n: number
 * @index: where to start from
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	m = sizeof(unsigned long int) * 8;

	/* This is to ensure that the index is within its range */
	if (index >= m)
		return (-1);

	*n |= (1UL << index);
	return (-1);
}
