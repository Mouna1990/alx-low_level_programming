#include "main.h"
/**
* _strncat - concatenates two strings, using at most n bytes from src.
* @dest: destination string to append to
* @src: source string to append from
* @n: maximum number of bytes to use from src
* Return: pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_length = 0;
int i;
while (dest[dest_length] != '\0')
{
dest_length++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_length + i] = src[i];
}
dest[dest_length + i] = '\0';
return (dest);
}
