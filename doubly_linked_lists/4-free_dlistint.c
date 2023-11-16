#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint- frees the entire linked list
 * @head: the head of the linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freer = head;

	if (head == NULL)
		return;

	while ((*freer).next != NULL)
	{
		freer = (*freer).next;
		free((*freer).prev);
	}

	free(freer);
}
