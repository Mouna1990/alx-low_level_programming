#include "main.h"
/**
* leet - encode into 1337speak
* @e: input value
* Return: e value
*/
char *leet(char *e)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; e[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (e[i] == s1[j])
{
e[i] = s2[j];
}
}
}
return (e);
}
