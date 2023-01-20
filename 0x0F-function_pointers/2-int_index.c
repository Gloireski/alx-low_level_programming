#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: int.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	else if (size <= 0)
		return (-1);
	return (-1);
}
