#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 1
 */

int main (void)
{
	int i;
	int f1 = 1, f2 = 2, f3;

	printf("%d, %d, ", f1, f2);

	for (i = 3; i <= 50; i++)
	{
		f3 = f1 + f2;    
		printf("%d, ", f3);    
		f1 = f2;
		f2 = f3;
	}
	return (0);
}
