#include "main.h"
#include <stddef.h>
/**
* _strpbrk - locates the first occurrence in a string of any of a set of bytes
* @s: the string to search
* @accept: the set of bytes to search for
*
* Return: a pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *ptr_s, *ptr_accept;

for (ptr_s = s; *ptr_s != '\0'; ptr_s++)
{
for (ptr_accept = accept; *ptr_accept != '\0'; ptr_accept++)
{
if (*ptr_s == *ptr_accept)
{
return (ptr_s);
}
}
}

return (NULL);
}
