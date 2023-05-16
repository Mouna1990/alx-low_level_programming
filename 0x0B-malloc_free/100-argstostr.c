#include <stdlib.h>
#include "main.h"
/**
* argstostr - Concatenates all the arguments of the program.
* @ac: Number of arguments.
* @av: Array of arguments.
*
* Return: Pointer to the new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i;
int length;
int total_length = 0;
int k = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
length = 0;
while (av[i][length] != '\0')
{
length++;
total_length++;
}
total_length++;
}
str = malloc(sizeof(char) * (total_length + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
length = 0;
while (av[i][length] != '\0')
{
str[k] = av[i][length];
length++;
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
