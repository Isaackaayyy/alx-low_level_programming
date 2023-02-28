#include "main.h"

/**
 * print_rev - reverse a string
 *
 * @s - string
 * Return
 */

 print_rev(char *s)
{
	int n = str.length();
	int i;

	for (i = 0; i < n/2; i++)
		swap(str[i], str[n - i - 1]);
	reverseStr(str);
	count << str;

	return (0);
}}
