#include <stdio.h>
/**
* main -  all possible different combinations of two digits..
* Return: Always 0 (success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 8; num1++)
{
for (num2 = num1 + 1; num2 <= 9; num2++)
{
putchar('0' + num1);
putchar('0' + num2);
if (num1 != 8 || num2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
