#include <stdio.h>
#include "main.h"

/**
 * print_to_98  - A function that prints all natural numbers from n to 98
 *
 * @n: first value
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
