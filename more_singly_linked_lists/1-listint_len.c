#include <stdio.h>
#include "lists.h"

/**
 * listint_len- start of program
 * @h: head
 * Return: the slab
*/
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
