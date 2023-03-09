#include "main.h"

/**
 * _sqrt_recursion - A function that returns the square root of a number
 *
 * @n: number
 * @i: counter
 *
 * Return: integer
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	int val, i = 0;

	val = _sqrt(n, i);

	return (val);
}

/**
 * _sqrt -  function to help with the square root
 *
 * @n: value acted on
 * @i: counter value
 *
 * Return: integer
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i < n)
		return (_sqrt(n, ++i));
	return (-1);
}

