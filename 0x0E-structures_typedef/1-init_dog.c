#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog;
 * @d: param struct?
 * @name: param value to init.
 * @age: param value to init.
 * @owner: param value to init.
 * Return: ...
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc (sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
