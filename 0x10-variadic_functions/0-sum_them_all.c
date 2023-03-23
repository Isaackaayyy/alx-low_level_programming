#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  Variadic function that returns the sum of all its parameters
 * @n: Parameter
 * Return: Returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
