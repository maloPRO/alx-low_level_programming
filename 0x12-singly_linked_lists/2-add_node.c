#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
* add_node - adds node
* @head: head
* @str: node
* Return: adress of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(sizeof(list_t)));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
