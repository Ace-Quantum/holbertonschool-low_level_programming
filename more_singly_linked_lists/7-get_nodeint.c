#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index- there's no reason it should be that long
 * @head: head
 * @index: the indexed node to return
 * Return: the node in question
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tracker_node = head;

	while (tracker_node != NULL)
	{
		if (i == index)
			return (tracker_node);
		tracker_node = (*tracker_node).next;
		i++;
	}

	return (NULL);
}
