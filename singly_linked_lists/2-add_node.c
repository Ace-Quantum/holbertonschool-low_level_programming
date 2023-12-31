#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node- start of code
 *
 * @head: head
 * @str: str
 *
 * Return: new head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).str = strdup(str);
	(*new_node).len = strlen(str);

	(*new_node).next = *head;
	*head = new_node;

	return (*head);
}
