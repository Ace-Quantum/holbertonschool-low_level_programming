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
	listint_t *freer = *head;
	listint_t *leader = (*freer).next;

	unsigned int counter = 0;

	while (leader != NULL)
	{
		if (counter == index)
		{
			(*freer).next = (*leader).next;
			free(leader);
			return (1);
		}
		counter++;
		leader = (*leader).next;
		freer = (*freer).next;
	}
	return (-1);
}
