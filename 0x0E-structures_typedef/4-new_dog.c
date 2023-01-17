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

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		owner_l = _strlen(owner) + 1;

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

		pdog->name = _strcpy(pdog->name, name);
		pdog->owner = _strcpy(pdog->owner, owner);
		pdog->age = age;
	}

	return (pdog);
}
/**
 * _strlen - returns the length of a string
 * @s: param
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
/**
 * _strcpy - copies the string pointed to by src.
 * @dest:destination
 * @src: source
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
