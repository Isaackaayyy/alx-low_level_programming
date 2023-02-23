#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: first value
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int lst_dgt = n % 10;

	if (lst_dgt < 0)
		lst_dgt = -lst_dgt;
	_putchar('0' + lst_dgt);
	return (lst_dgt);
}
