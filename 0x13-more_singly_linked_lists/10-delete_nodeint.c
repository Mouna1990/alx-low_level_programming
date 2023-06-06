#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at
* a given index of a linked list.
* @head: A double pointer to the head of the linked list.
* @index: The index of the node to delete (starting from 0).
* Return: 1 if successful, or -1 if the operation failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (*head == NULL)
{
return (-1);
}
else
{
listint_t *current = *head;
listint_t *previous = NULL;
unsigned int i;
for (i = 0; current != NULL && i < index; i++)
{
previous = current;
current = current->next;
}

if (current == NULL)
{
return (-1);
}

if (previous == NULL)
{
*head = current->next;
}
else
{
previous->next = current->next;
}
free(current);
return (1);
}
}
