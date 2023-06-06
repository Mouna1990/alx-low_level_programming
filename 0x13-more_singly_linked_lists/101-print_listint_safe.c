#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: A pointer to the head node of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;
while (current != NULL)
{
if (current == loop_node)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
printf("[%p] %d\n", (void *)current, current->n);
loop_node = current;
current = current->next;
count++;
}
return (count);
}
