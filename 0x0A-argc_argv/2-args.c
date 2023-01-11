#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: args count
 * @argv: args vector
 * Return: always.
 */

int main(int argc, char *argv[])
{
	int c;

	(void) argv;
	if (argc)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
