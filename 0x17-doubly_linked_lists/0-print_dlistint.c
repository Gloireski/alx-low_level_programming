#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: param
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int taille = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++taille;
		h = h->next;
	}
	return (taille);
}
