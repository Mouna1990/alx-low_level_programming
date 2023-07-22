#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list to be freed.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}