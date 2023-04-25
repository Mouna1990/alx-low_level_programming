#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers separated by commas and spaces.
* Return: Always 0.
*/
int main(void)
{
unsigned long long fib1 = 1;
unsigned long long fib2 = 2;
unsigned long long temp;
int count;
printf("%llu, %llu, ", fib1, fib2);
for (count = 3; count <= 50; count++)
{
temp = fib1 + fib2;
printf("%llu, ", temp);
fib1 = fib2;
fib2 = temp;
}
printf("\n");
return (0);
}

