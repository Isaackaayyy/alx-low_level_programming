#include "main.h"

/**
 * main - Function prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 1 Always
 */

int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	return (1);
}
