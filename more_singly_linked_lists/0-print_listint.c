#include <stdio.h>
#include "lists.h"

/**
 * print_listint- start of program
 * @h: head
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		counter++;
	}
	return(counter);
}
