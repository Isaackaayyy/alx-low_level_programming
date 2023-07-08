#include "main.h"

/**
 * flip_bits -  number of bits needed to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;
	unsigned long int c;

	c = n ^ m;

	while (c)
	{
		c = c & (c - 1);
		n_bits++;
	}
	return (n_bits);
}
