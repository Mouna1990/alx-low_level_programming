#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* open_file - Opens a file with the specified flags and mode.
* @filename: Name of the file to open.
* @flags: Flags to use when opening the file.
* @mode: Mode to set for the file if it needs to be created.
*
* Return: The file descriptor on success.
*         Exits with error code 98 and prints an error message on failure.
*/
int open_file(const char *filename, int flags, int mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
return (fd);
}

/**
* copy_file - Copies the contents of one file to another.
* @file_from: Name of the source file.
* @file_to: Name of the destination file.
* Return: None.
*Exits with error codes 98, 99, or 100
*and prints an error message on failure.
*/
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

fd_from = open_file(file_from, O_RDONLY, 0);
fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read || bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
}

/**
* main - Entry point.
* @argc: Number of arguments.
* @argv: Array of argument strings.
*
* Return: 0 on success, otherwise exit with error codes.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
