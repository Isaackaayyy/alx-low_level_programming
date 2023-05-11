#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * 	values must not be more than 4,000,000
 * Return: Always 1
 */

int main(void)
{
	int i;
	long int f1 = 0, f2 = 1, f3;

	for (i = 1; i <= 32; i++)
	{
		f3 = f1 + f2;

		if (f3 % 2 == 0)
			printf("%ld", f3);

		f1 = f2;
		f2 = f3;

		if (i != 32)
			printf(", ");
	}
	printf("\n");
	return (0);
}
