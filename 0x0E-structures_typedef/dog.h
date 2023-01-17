#ifndef _HEADER_
#define _HEADER_

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
};

/**
 * dog_t - Typedef for unsigned int
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
