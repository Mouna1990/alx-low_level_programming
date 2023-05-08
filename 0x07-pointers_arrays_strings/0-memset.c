#include "main.h"
/**
* _memset- fill a block of memory with a specific value.
* @s:is a pointer to the block of memory to be filled  b.
* @b:is the value to be filled.
* @n:number of bytes to be changed.
* Return: changed array with new value for n bytes.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
