#include "main.h"

/**
 * add - function that adds two integers and returns the result
 *
 * @x: first value
 * @y: Second value
 *
 * Return: Integer
 */

int add(int x, int y)
{
	int sum;

	sum = x + y;

	if (sum < 0)
		sum = -sum;
	return (sum);
}
