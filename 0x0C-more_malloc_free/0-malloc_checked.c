#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: param .
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *pmalloc = malloc(b);

	if (pmalloc == NULL)
		return (98);
	return (pmalloc);
}
