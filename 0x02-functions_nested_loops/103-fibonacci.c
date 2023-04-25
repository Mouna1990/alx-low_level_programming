#include <stdio.h>
/**
* main - print the sum of even Fibonacci numbers less than 4000000.
* Return: 0 on success
*/
int main(void)
{
int i = 0;
int j = 1;
int k = 2;
int sum = k;
int next;
while (k + j < 4000000)
{
next = k + j;
k = j;
j = next;
if (next % 2 == 0)
{
sum += next;
}
++i;
}
printf("%d\n", sum);
return (0);
}
