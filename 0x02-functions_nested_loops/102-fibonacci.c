#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 1
 */

int main(void)
{
	int i;
	long int f1 = 0, f2 = 1, f3;

	for (i = 1; i <= 50; i++)
	{
		f3 = f1 + f2;
		printf("%ld", f3);
		f1 = f2;
		f2 = f3;

		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
