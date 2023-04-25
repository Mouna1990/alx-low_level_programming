#include "main.h"
/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number of rows and columns in the times table.
*/
void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{
int i, j, result;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
_putchar('0' + result);
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result >= 100)
_putchar('0' + result / 100);
if (result >= 10)
_putchar('0' + result / 10 % 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}
}
