#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: nomb of mem.
 * @size: size .
 * Return: ....
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
