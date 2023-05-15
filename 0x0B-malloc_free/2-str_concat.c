#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: Concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int length1 = 0, length2 = 0;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

concat = malloc(sizeof(char) * (length1 + length2 + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < length1; i++)
concat[i] = s1[i];

for (j = 0; j < length2; j++)
concat[i++] = s2[j];

concat[i] = '\0';

return (concat);
}
