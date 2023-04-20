#include <stdio.h>
/**
* main -  program  prints the size of various on the computer it is compiled.
* Return: always 0 (success)
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
