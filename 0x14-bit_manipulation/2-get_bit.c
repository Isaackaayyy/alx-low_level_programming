#include "main.h"

/**
 * get_bit -  gives value of a bit at a given index
 * @n: the value
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int idx;
	unsigned int bit;

	bit = sizeof(n) * 8;

	if (index >= bit)
		return (-1);

	idx = (n >> index) & 1;

	return (idx);
}
