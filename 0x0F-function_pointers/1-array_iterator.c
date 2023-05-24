#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each array element on a newline
* @array: array
* @size: is the size of the array
* @action: a pointer to the function you need to use
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!(array && action))
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
