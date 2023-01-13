#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free;
 * @ptr: pointer holds mem.
 * @old_size: old size.
 * @new_size: new size.
 * Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);



}
