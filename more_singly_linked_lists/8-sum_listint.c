#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint- this was the easiest one
 * @head: why couldn't we start with this?
 * Return: honestly idk what I'm going to do with everything else left
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum = sum + (*current).n;
		current = (*current).next;
	}

	return (sum);
}
