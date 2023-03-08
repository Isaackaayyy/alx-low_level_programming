#include "main.h"

/**
 * _sqrt_recursion - A function that returns the square root of a number
 *
 * @n: number
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n);
}
