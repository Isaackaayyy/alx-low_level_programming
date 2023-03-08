#include "main.h"

/**
 * factorial - Returning the factorial of the given number
 *
 * @n: Given number
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 1)
		n = -1;
	if (n == 1)
		n = 1;
	if (n > 1)
		n = n * factorial(n - 1);
	return (n);
}
