#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s : param
 * Return : length of s
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\n'; s++)
		c++;

	return (c);
}
