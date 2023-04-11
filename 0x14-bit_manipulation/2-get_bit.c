#include "main.h"

/**
* get_bit - value of a bit at a given index
* @n: get the bit from n
* @index: index
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	/* This is to ensure that the index is within its range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* By using index, move n to the right, then verify the rightmost bit */
	a = (n >> index) & 1;

	return (a);
}
