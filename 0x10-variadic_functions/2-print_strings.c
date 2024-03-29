#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Variadic function that prints strings followed by a new line
 * @separator: Separator
 * @n: arguements passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;

	unsigned int c;
	char *str;

	va_start(s, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (c < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
