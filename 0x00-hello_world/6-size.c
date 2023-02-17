#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	printf("size of a char: %d byte(s) \n", sizeof(char));
	printf("size of an int: %d byte(s) \n", sizeof(int));
	printf("size of long int: %d byte(s) \n", sizeof(int *));
	printf("size of a long long int: %d byte(s) \n", sizeof(long int));
	printf("size of a float: %d byte(s) \n", sizeof(signed int));
	return (0);
}

