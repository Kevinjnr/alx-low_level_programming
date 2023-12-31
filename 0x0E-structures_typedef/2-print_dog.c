#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that print struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}
