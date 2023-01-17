#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct new type.
 * @name: the name.
 * @age: age of the an.
 * @owner: it's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t: typdef for dog struct.
 */

typedef struct dog dog_t;
#endif /* DOG_H */
