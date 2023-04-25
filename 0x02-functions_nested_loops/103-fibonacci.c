#include <stdio.h>
/**
* main -print the sum of Even Fibbonacci  number.
*
* Return: Always 0.
*/
int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
while (k + j < 4000000)
{
k += j;
++i;
}
printf("%ld\n", sum);
return (0);
}
