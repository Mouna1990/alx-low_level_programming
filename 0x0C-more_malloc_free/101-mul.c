#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _isdigit - Checks if a string contains only digits
 * @str: The string to check
 * Description: This function checks if the given string contains only digits.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

int _isdigit(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _multiply - Multiplies two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Description: This function multiplies two positive numbers
 * represented as strings and prints the result.
*/
void _multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
int *result;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

result = calloc(len1 + len2, sizeof(int));

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + mul;

result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;
for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");

free(result);
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
return (98);
}

_multiply(argv[1], argv[2]);

return (0);
}
