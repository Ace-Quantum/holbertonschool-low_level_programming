#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    /*if it were up to me these would be in the order of holder, freer, leader*/
    /*but that's not the way the cookie crumbles today*/
    /*lol nevermind that's exactly what it should be.*/
    /*I gotta learn to trust my instincts more*/
    listint_t *freer = *head;
    listint_t *leader = (*freer).next;

    unsigned int counter = 0;

    while (leader != NULL)
    {
        if (counter == index);
        {
            (*freer).next = (*leader).next;
            free(leader);
            return(1);
        }
        counter++;
        leader = (*leader).next;
        freer = (*freer).next
    }
    return (-1);
}