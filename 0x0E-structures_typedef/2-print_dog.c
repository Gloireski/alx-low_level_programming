#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: param struct?
 * Return: ...
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == NULL ? printf("nil\n") : printf("Name: %s\n", d->name));
		(d->age == 0.0 ? printf("nil\n") : printf("Age: %s\n", d->name));
		(d->owner == NULL ? printf("nil\n") : printf("Owner: %s\n", d->name));
	}
}