#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: param
 * Return: ...
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
