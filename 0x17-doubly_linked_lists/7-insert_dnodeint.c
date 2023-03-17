#include <stdlib.h>
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
	int sum = 0;
	unsigned int c = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	while (head && index != c)
	{
		head = head->next;
		c++;
	}
	if (index == c && head)
		return (head);
	else
		return (NULL);
}
