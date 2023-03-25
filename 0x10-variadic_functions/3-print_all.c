#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: arguement passed
 */

void print_all(const char * const format, ...)
{
	va_list anything;

	char *str;
	unsigned int i;

	va_start(anything, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				str = va_arg(anything, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && format[i] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(anything);

}

