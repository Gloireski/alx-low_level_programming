#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog -  creates a new dog.
 * @name: dog's name;
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	int name_l = 0, owner_l = 0;

	if (name_l != NULL && owner_l != NULL)
	{
		name_l = strlen(name) + 1;
		owner_l = strlen(owner) + 1;

		pdog = malloc(sizeof(dog_t));
		if (pdog == NULL)
			return (NULL);

		pdog->name = malloc(sizeof(char) * name_l);
		if (pdog->name == NULL)
		{
			free(pdog);
			return (NULL);
		}
		pdog->owner = malloc(sizeof(char) * owner_l);
		if (pdog->owner == NULL)
		{
			free(pdog->name);
			free(pdog);
			return (NULL);
		}

		pdog->name = strcpy(pdog->name, name);
		pdog->owner = strcpy(pdog->owner, owner);
	}

	return (pdog);
}
