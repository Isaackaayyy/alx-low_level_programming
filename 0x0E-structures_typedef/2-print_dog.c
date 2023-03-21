#include <stdlib.h>
#include "main.h"

/**
 * print_dog - prints a struct dog
 * @d: parameter
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", my_dog.name);
	printf("Age: %f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);
}
