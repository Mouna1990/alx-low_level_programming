#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A pointer to the pointer to the head node of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current = *h;
listint_t *temp = NULL;
while (current != NULL)
{
if (current->next >= current)
{
temp = current->next;
current->next = NULL;
break;
}
temp = current->next;
current->next = NULL;
current = temp;
count++;
}
*h = NULL;
while (temp != NULL)
{
current = temp;
temp = temp->next;
free(current);
count++;
}
return (count);
}
