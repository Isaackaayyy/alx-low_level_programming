#include "main.h"

/**
 * unsigned int binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * 	there is one or more chars in the string b that is not 0 or 1
 * 	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int i;
	int s;

	if (b == NULL)
		return (sum);

	s = strlen(b);

	if (*b != '\0')
	{
		for (i = 0; *b != '\0'; i++)
		{
			sum = b[i] * pow(2, (s - 1));
			sum++;
			s--;
		}
	return (sum);
	}
	return (sum);
}
