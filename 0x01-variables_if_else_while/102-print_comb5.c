#include <stdio.h>
/**
* main -  all possible different combinations of two digits..
* Return: Always 0 (success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 < 100; num1++)
{
for (num2 = num1; num2 < 100; num2++)
{
int num1_1 = num1 / 10;
int num1_2 = num1 % 10;
int num2_1 = num2 / 10;
int num2_2 = num2 % 10;
if (num1 != num2)
{
putchar(num1_1 + '0');
putchar(num1_2 + '0');
putchar(' ');
putchar(num2_1 + '0');
putchar(num2_2 + '0');
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
