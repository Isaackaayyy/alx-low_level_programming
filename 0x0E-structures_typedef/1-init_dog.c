#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
