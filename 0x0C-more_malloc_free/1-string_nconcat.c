#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: param .
 * @s2: param .
 * @n: size.
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[i])
	{
		i++;
	}
	while (s1[j])
	{
		j++;
	}
	if (n >= i)
		l = j + i;
	else
		l = j + n;
	p = malloc(sizeof(char) * l + 1);
	i = 0;
	while (k < l)
	{
		if (k <= j)
			p[k] = s1[k];
		if (k >= j)
		{
			p[k] = s2[i];
			i++;
		}
		k++;
	}
	p[k] = '\0';
	if (p == NULL)
		return (NULL);
	return (p);
}
