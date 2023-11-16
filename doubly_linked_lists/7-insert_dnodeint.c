#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * I got some advice from chatgpt about how to eliminate the need for a second tracker
 * so that I may be able to preserve the previous pointer later. 
 * hence why this code may look a little advanced, I'm happy chatgpt gave me this little trick
 * I think it'll come in handy with hash tables
 * so with that being said, I'll be giving up dot notation now.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *new_node;
    dlistint_t *tracker_node = *head;

    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    (*new_node).n = n;

    if (idx == 0)
    {
        (*new_node).next = *head;
        (*new_node).prev = NULL;
        if (*head != NULL)
            (**head).prev = new_node;
        *head = new_node;
        return (new_node);
    }

    while (tracker_node != NULL && i < idx - 1)
    {
        i++;
        tracker_node = (*tracker_node).next;
    }

    if ((*tracker_node).next == NULL)
    {
        free(new_node);
        return (NULL);
    }

    (*new_node).next = (*tracker_node).next;

    if (tracker_node->next != NULL)
        tracker_node->next->prev = new_node;

    new_node->prev = tracker_node;
    tracker_node->next = new_node;

    return (new_node);
}