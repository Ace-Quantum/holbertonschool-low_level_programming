#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- inset a node at a specific spot
 * @h: the head of the list
 * @idx: the index at which to insert
 * @n: the data the new node should hold
 * Return: the node that was inserted
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *tracker_node = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;

	if (idx == 0)
	{
		(*new_node).next = *h;
		(*new_node).prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
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
	if (tracker_node->next != NULL)
		tracker_node->next->prev = new_node;
	new_node->prev = tracker_node;
	tracker_node->next = new_node;
	return (new_node);
}
