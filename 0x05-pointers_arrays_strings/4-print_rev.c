#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: param
 * Return: ...
 */
void _puts(char *str)
{
	int c = 0;
	
	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
