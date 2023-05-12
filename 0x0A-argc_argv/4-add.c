#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: the number of command line arguments
* @argv: an array of arguments
* Return: 0 if successful, 1 if we have an error
*/
int main(int argc, char **argv)
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int j;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += strtol(argv[i], NULL, 10);
}
printf("%d\n", sum);
return (0);
}
