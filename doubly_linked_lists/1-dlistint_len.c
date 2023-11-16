#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len- counts the number of nodes in a list
 * @h: the head of the lists
 * Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = (*h).next;
	}
	return (num_nodes);
}
