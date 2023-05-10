#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion_helper -  function help us  for _sqrt_recursion()
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 * Return: the resulting square root
*/
int _sqrt_recursion_helper(int n, int i)
{
while (i * i > n)
return (-1);
while (i * i == n)
return (i);
return (_sqrt_recursion_helper(n, i + 1));
}
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
while (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}
