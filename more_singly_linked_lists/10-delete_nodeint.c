#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- Idk what they're wanting from me here
 * @head: head
 * @index: the index to delete
 * Return: pass code or error code
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *freer = NULL;
	listint_t *leader = NULL;

	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		freer = *head;
		*head = (**head).next;
		free(freer);
		return (1);
	}

	leader = *head;

	while (counter != index - 1)
	{
		if (leader == NULL)
			return (-1);
		leader = (*leader).next;
		counter++;
	}

	freer = (*leader).next;

	if ((*freer).next != NULL)
		(*leader).next = (*freer).next;
	else
		(*leader).next = NULL;

	free(freer);
	return (1);
}
