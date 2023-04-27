#include "main.h"
#include <stdio.h>
/**
*  _isupper - uppercase letters
*-  a function that checks for uppercase character.
*@c: char to check
* Return: Always 0.
*/
int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
return (0);
else
return (1);
}
