#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the beginning of a dlistint_t list.
 * @head: param
 * @n: val
 *
 * Return: addr of node or null.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		tmp = *head;
		while ((*head)->next != NULL)
			tmp = tmp->next;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;

		return (new);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
