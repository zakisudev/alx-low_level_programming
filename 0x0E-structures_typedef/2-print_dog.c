#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints struct dog d
 * @d: the struct dog variable
 *
 * Return: nothing (void)
 */
void print_dog(struct dog *d)
{
	char *dogname;
	char *dogowner;

	if (d == NULL)
		return;

	if (d->name == NULL)
		dogname = "(nil)";
	else
		dogname = d->name;

	if (d->owner == NULL)
		dogowner = "(nil)";
	else
		dogowner = d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", dogname, d->age, dogowner);
}
