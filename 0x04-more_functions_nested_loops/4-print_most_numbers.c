#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9
 *
 * Return:
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2')
			continue;
		if (a == '4')
			continue;
		else
			_putchar(a);

	}
	_putchar('\n');
}
