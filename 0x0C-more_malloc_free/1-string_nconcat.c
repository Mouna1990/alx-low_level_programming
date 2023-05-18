#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatenates two strings
* @s1: The first string
* @s2: The second string
* @n: The number of bytes from s2 to concatenate
* Return: Pointer to the concatenated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, concat_len, i, j;
if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";
while (*(s1 + len1) != '\0')
len1++;
while (*(s2 + len2) != '\0')
len2++;
if (n >= len2)
n = len2;
concat_len = len1 + n;
concat = malloc((concat_len + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
*(concat + i) = *(s1 + i);
for (j = 0; j < n; j++, i++)
*(concat + i) = *(s2 + j);

*(concat + i) = '\0';

return (concat);
}
