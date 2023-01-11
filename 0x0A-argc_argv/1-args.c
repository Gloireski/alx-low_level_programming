#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args
 * @argc: args count
 * @argv: args vector
 * Return: always.
 */

int main(int argc, char *argv[])
{
	int c = argc - 1;

	printf("%d\n", c);

	return (0);
}
