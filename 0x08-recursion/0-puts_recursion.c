#include <stdio.h>
#include "main.h"
/**
*_puts_recursion - print string "puts with recursion"
*return : always 0
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
