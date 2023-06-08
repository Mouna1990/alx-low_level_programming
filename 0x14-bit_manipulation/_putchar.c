#include <unistd.h>

/**
* _putchar - writes a character to the standard output (stdout)
* @c: the character to be written
* Return: On success, returns the character
* written. On error, returns -1.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
