#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: param
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == '\0')
	{
		return (c);
	}
	c++;
	s++;
	return (_strlen_recursion(s));
}
