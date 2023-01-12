#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space;
 * @str: string;
 * Return: array;
 */

char *_strdup(char *str)
{
	char *cpstr;
	int i = 0, a = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	cpstr = malloc((i * sizeof(char)));
	if (cpstr == NULL)
		return (NULL);
	while (a < i)
	{
		cpstr[a] = str[a];
		a++;
	}
	cpstr[a] = '\n';
	return (cpstr);
}
