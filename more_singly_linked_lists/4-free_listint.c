#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- free me
 * @head: from this prison
*/
void free_listint(listint_t *head)
{
	listint_t *leader;
	listint_t *freer = head;

	while (freer != NULL)
	{
		leader = (*freer).next;
		free(freer);
		freer = leader;
	}
}
