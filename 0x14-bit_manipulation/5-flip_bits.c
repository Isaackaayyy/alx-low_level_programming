#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get from one number
 * to another
 *
 * @n: first input
 * @m: second input
 *
 * Return: the number of bits you would need to flip to get from one number
 * to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long a;
	unsigned int c = 0;

	/* to retrieve the different bits, use XOR */
	a = n ^ m;

	while (a != 0)
	{
		c += (a & 1);
		/* move to the next bit */
		a >>= 1;
	}
	return (c);
}
