#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Read text file and print to STDOUT.
* @filename: Text file to be read.
* @letters: Number of letters to be read.
*
* Return: The actual number of bytes read and printed,
*         or 0 when the function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t w;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

w = read(fd, buf, letters);
if (w == -1)
{
free(buf);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buf, w);

free(buf);
close(fd);

return (w);
}
