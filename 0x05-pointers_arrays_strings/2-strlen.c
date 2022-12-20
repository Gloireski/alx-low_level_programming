#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s : param
 * Return : lenght of s
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '/0'; s++)
	{
		c++;
	}
	return (c);
}
