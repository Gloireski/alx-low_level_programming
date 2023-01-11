#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: args count
 * @argv: args vector
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int c;
	unsigned int r = 0, k;
	char *e;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			e = argv[c];
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			r = r + atoi(e);
		}
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
