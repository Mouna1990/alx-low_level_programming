#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *dup;
int length;

if (str == NULL)
return (NULL);

length = strlen(str) + 1;
dup = malloc(length *sizeof(char));
if (dup == NULL)
return (NULL);

strcpy(dup, str);

return (dup);
}
