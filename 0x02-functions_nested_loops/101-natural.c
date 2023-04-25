#include <stdio.h>
/**
* main - all the natural numbers below 10 that are multiples of 3 or 5.
* Return: Always 0.
*/
int main() {
int sum = 0; 
for (int i = 0; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i; 
}
}
printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
return (0);
}

