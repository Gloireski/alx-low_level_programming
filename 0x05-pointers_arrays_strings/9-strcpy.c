#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest:destination
 * @src: source
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
