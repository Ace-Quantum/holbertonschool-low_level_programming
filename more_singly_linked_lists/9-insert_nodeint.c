#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index- why does this one have to be so long?
 * @head: head
 * @idx: index to insert
 * @n: the number for the node
 * Return: the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *tracker_node = *head;

	new_node = malloc(sizeof(listint_t));

	/*if (head == NULL || *head == NULL)
	{
		free(new_node);
		return (*head);
	}*/

	if (new_node == NULL)
		return (*head);

	(*new_node).n = n;

	if (idx == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
		return (new_node);
	}

	while (tracker_node != NULL && i < idx - 1)
	{
		i++;
		tracker_node = (*tracker_node).next;
	}

	if (tracker_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	(*new_node).next = (*tracker_node).next;
	(*tracker_node).next = new_node;

	return (new_node);
}
