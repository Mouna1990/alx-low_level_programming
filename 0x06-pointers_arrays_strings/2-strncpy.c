#include "main.h"
/**
* _strncpy - copies n bytes of src to dest.
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
* Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
