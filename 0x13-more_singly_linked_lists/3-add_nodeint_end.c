#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @n: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *temp;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head  = new_list;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
		temp = temp->next;
		temp->next = new_list;
		return (temp);
	}
	return (NULL);
}
