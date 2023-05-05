#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:  decimal number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

}
