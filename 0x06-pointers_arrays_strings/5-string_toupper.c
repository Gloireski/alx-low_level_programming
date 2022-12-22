#include "main.h"

/**
 * string_toupper - convert to capital letter.
 * @str: string
 * Return: new string pointer
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[0] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
