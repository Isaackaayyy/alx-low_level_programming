#include "main.h"

/**
 * is_prime_number - checking for prime numbers
 *
 * @n: input value
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	int i;

	i = n - 1;

	if (n == 1 || n < 0)
		return (0);
	if (n % i == 0)
		return (1);
	n = n;
	return (n);
}
