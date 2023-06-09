#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: Text to append.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (length > 0)
{
bytes_written = write(fd, text_content, length);
close(fd);

if (bytes_written == -1)
return (-1);
}

return (1);
}
