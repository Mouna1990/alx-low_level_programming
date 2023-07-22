#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given position in the list.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;

i = 0;
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
return (-1);
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;

free(current);
return (1);
}
