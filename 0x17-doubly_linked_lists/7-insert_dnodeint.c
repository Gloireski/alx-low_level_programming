#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of list
 * @idx: the index
 * @n: data of node
 *
 * Return: new node addr or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *new = NULL, *tmp = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	tmp = *h;
	while (tmp && idx != c)
	{
		tmp = tmp->next;
		++c;
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	if (idx > c)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
	if (idx == c)
	{
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
		tmp = new;
		tmp->prev->next = new;
	}
	return (new);
}
