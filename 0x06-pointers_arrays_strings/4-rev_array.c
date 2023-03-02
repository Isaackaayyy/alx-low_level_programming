#include "main.h"

/**
 * reverse_array - reversing a string
 *
 * @a: array of integers
 * @n: integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
