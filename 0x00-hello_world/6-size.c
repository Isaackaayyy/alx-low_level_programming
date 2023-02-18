#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the size of various types.
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(int *));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)\n", sizeof(signed int));
	return (0);
}

