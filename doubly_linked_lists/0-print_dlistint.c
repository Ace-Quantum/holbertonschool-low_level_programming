#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint- prints the list of integers
 * @h: a pointer to the start of the linked list
 * Return: the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		len++;
	}
	return (len);
}
