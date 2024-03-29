#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
