#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: param
 * @n: val
 *
 * Return: addr of node or null.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;

		return (*head);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
