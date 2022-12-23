#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string
 * Return: new string pointer
 */

char *cap_string(char *str)
{
	int c =0, i, tspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')',
	'{', '}'};

	while (str[c])
	{
		i = 0;
		while (i < tspc)
		{
			if ((c == 0 || str[c - 1] == spc[i]) && (str[c] >= 97 && str[c] <= 122))
			{
				str[c] = str[c] - 32;
			}
			i++;
		}
		c++;
	}

	return (str);
}
