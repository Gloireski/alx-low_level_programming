#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication.
 * @argc: args count
 * @argv: args vector
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int c, r = 1;

	(void) argv;
	if (argc > 2)
	{
		for (c = 1; c < argc; c++)
		{
			r = r * atoi(argv[c]);
		}
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
