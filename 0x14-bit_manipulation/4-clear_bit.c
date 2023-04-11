#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the value
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	m = sizeof(unsigned long int) * 8;

	/* This is to ensure that the index is within its range */
	if (index >= m)
		return (-1);

	/* set the bit at the specified index to zero*/
	*n &= ~(1UL << index);

	return (1);
}
