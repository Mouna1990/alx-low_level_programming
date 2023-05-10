#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return _is_palindrome(s, len);
}

/**
* _is_palindrome - helper function for is_palindrome
* @s: the string to check
* @len: the length of the string
* Return: 1 if s is a palindrome, 0 otherwise
*/
int _is_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s != s[len - 1])
return (0);
else
return (_is_palindrome(s + 1, len - 2));
}

/**
* _strlen_recursion - helper function for is_palindrome
* @s: the string to get the length of
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
