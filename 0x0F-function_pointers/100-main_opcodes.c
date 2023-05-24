#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{

if (argc != 2)
{
printf("Error\n");
exit(1);
}

int bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
unsigned char *main_ptr = (unsigned char *)main;
int i;
for (i = 0; i < bytes; i++)
{
printf("%.2x", main_ptr[i]);
if (i != bytes - 1)
printf(" ");
}

printf("\n");
return (0);
}
