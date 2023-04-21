#include <stdio.h>
/**
* main -  list alph without q and e.
* Return: Always 0 (success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'e'; c++)
for (c = 'a'; c >= 'q'; c++)
putchar(c);
putchar('\n');
return (0);
}
