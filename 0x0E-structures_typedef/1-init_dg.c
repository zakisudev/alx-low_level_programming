#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - initializes variable d of type struct dog
 * @d: variable to be initialized
 * @name: name of dog in variable d
 * @age: age of dog in variable d
 * @owner: name of dog's owner in variable d
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
