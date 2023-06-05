#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Frees a linked list and sets the head to NULL.
* @head: Double pointer to the head of the linked list.
*
* Return: None.
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
}
