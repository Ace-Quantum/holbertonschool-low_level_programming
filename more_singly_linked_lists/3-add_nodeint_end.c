#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end- starts program
 * @head: head
 * @n: number
 * Return: the slab
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;

		while ((*temp_node).next != NULL)
			temp_node = (*temp_node).next;

		(*temp_node).next = new_node;
	}

	return(new_node);
}
