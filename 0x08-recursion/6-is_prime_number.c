#include "main.h"

/**
 * is_prime_number - checking for prime numbers
 *
 * @n: input value
 * @i: counter
 *
 * Return: integer
 */

int _prime(int n, int i);

int is_prime_number(int n)
{
	int val, i = 2;

	val = _prime(n, i);

	return (val);
}

/**
 * _prime - function assisting in prime number
 *
 * @n: input value
 * @i: counter
 *
 * Return: integer
 */

int _prime(int n, int i)
{
	if (n == 1 || n <  0)
		return (0);
	if (n % i == 0 && i != n)
		return (0);
	else if (i < n)
		return (_prime(n, ++i));
	return (1);
}
