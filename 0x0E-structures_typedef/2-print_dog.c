#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: param struct?
 * Return: ...
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == null ? printf("nil\n") : printf("%s\n", d->name));
	}
}
