#include "main.h"
#include <stdio.h>
/**
 * is_prime_number_helper - helper function for is_prime_number()
 * @n: the number to check for primality
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i < n)
return (0);

if (i == n)
return (1);

return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_number_helper(n, 2));
}
