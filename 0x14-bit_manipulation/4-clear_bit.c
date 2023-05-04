#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the value
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = sizeof(n) * 8;

	if (index >= a)
		return (-1);

	*n |= 0UL << index;

	return (1);
}
