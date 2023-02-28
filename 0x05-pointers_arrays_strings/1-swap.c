#include "main.h"

/**
 * swap_int - swapping variables
 *
 * @a: first value
 * @b: second value
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
