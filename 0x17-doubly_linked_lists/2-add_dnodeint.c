#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds node
 * @head: head
 * @n: node
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if(new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
