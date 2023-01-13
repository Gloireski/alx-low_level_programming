#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: param .
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pmalloc = malloc(b);

	if (pmalloc == NULL)
		exit(98);
	return (pmalloc);
}
