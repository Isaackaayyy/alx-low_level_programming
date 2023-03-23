#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Variadic function that prints numbers
 * @separator: The string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	int num;

	va_list numbers;

	va_start(numbers, n);

	for (c = 0; c < n; c++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (c < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
