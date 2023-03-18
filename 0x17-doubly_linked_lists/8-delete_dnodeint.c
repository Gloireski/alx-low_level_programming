#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: head of list
 * @index: the index
 *
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int taille = 0;
	dlistint_t *current = NULL, *tmp = NULL;

	if (head && *head)
	{
		taille = dlistint_len(*head);
		if (index > taille)
			return (-1);
		if (index == 0)
			return (delete_first_dnode(head));
		current = get_dnodeint_at_index(*head, index);
		if (current)
		{
			tmp = current;
			if (taille - 1 == index)
				current->prev->next = current->next;
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(tmp);
			return (1);
		}
	}
	return (-1);
}

/**
  * delete_first_dnode - Remove the first node of a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head, *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of node
 *
 * Return: n or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

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
