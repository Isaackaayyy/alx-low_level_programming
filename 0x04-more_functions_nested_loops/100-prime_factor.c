#include "main.h"
#include <stdio.h>



int main(void)
{
	long int a, n, s, sum = 0;

	n = 612852475143;

	for (a = 2; a < 612852475143; a++)
	{
		s = n % a;

		if (s == 0)
		{
			sum += s;
			printf("%ld\n", s);
		}
	}
	return (0);
}
