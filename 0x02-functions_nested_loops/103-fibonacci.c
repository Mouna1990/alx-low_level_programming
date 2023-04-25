#include <stdio.h>
/**
* main -print the sum of Even Fibbonacci  number.
*less than 4000000.
* Return: nothing
*/
int main(void)
{
int first = 1;
int second = 2;
int sum = 0;
while (first <= 4000000)
{
if (first % 2 == 0)
{
sum += first;
}
int next = first + second;
first = second;
second = next;
}
printf("Sum of even-valued terms: %d\n", sum);
return (0);
}
