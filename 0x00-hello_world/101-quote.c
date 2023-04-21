#include <unistd.h>
#define STDERR_FILENO 2
/**
* main - linux.
* Return: Always 0 (success) or 1 (failure)
*/
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59; /* length of message including newline */
if (write(STDERR_FILENO, msg, len) != len)
return (1);
return (1);
}
