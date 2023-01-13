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
	unsigned int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(sizeof(s1) + n + 1);
	while (s2[i])
	{
		i++;
	}
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	if (n >= i)
	{
		while (s2[k])
		{
			p[j] = s2[k];
			k++;
			j++;
		}
		p[j] = '\0';
	}
	else
	{
		while ((k <= n) && s2[k])
		{
			p[j] = s2[k];
			k++;
			j++;
		}
		p[j] = '\0';
	}
	if (p == NULL)
		return (NULL);
	return (p);
}
