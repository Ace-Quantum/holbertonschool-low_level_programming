#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- start
 * @head: head
 * Return: the number
*/
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp_node = *head;

	if (*head == NULL)
		return (0);

	data = (*temp_node).n;

	temp_node = (**head).next;

	free(*head);

	*head = temp_node;

	return (data);
}
