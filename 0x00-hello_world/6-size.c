#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	printf("   short int is %ld byte(s) \n", sizeof(short int));
	printf("         int is %ld byte(s) \n", sizeof(int));
	printf("       int * is %ld byte(s) \n", sizeof(int *));
	printf("    long int is %ld byte(s) \n", sizeof(long int));
	printf("  long int * is %ld byte(s) \n", sizeof(long int *));
	printf("  signed int is %ld byte(s) \n", sizeof(signed int));
	printf("unsigned int is %ld byte(s) \n", sizeof(unsigned int));
	return (0);
}

