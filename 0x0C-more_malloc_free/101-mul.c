#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  main - the program.
 *  @argc: count arg.
 *  @argv: arg vec.
 *  Return: int.
 */
int main(int argc, char *argv[])
{
	int s, i;

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
		s = s * atoi(argv[i]);
	}
	_putchar('0' + s);
	_putchar('\n');
	return (0);
}
