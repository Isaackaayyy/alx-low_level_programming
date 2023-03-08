#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to y
 *
 * @x: base integer
 * @y: power integer
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
