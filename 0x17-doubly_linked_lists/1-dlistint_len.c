#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: param
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int taille = 0;

	while (h != NULL)
	{
		taille++;
		h = h->next;
	}
	return (taille);
}
