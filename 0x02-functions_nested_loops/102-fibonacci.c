#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers separated by commas and spaces.
* Return: Always 0.
*/
int main(void)
{
int fib1 = 1;
int fib2 = 2;
int temp;
int count;
printf("%d, %d, ", fib1, fib2);
for (count = 3; count <= 50; count++)
{
temp = fib1 + fib2;
printf("%d, ", temp);
fib1 = fib2;
fib2 = temp;
}
printf("\n");
return (0);
}

