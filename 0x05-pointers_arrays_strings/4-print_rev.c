#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: param
 * Return: ...
 */
void print_rev(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}
