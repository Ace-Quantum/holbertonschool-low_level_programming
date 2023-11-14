#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2- free them
 * @head: head
*/
void free_listint2(listint_t **head)
{
	listint_t *leader;
	listint_t *freer = *head;

	if (*head == NULL || head == NULL)
		return;

	freer = *head;

	while (freer != NULL)
	{
		leader = (*freer).next;
		free(freer);
		freer = leader;
	}

	*head = NULL;
}
