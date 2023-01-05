#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: param
 * Return: ...
 */
void _print_rev_recursion(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}
	if (c < 0)
		return;
	c--;
	_putchar(s[c]);
	_puts_recursion(s);
}
