#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if they are identical,
 * @s1: the 1st string to compare
 * @s2: the 2nd  string to compare, can contain *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s2 == '*')
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));

return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
