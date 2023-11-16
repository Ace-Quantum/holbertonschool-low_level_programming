#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index- get info from a node
 * @head: the start of the list
 * @index: the number at which to recieve info from
 * Return: the desired node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tracker_node = head;

	while (tracker_node != NULL)
	{
		if (i == index)
			return (tracker_node);
		tracker_node = (*tracker_node).next;
		i++;
	}
	return (NULL);
}
