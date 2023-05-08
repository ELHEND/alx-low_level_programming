#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters actually read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, n;
char *buf;
if (!filename)
return (0);
buf = malloc(sizeof(char) * (letters + 1));
if (!buf)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}
n = read(fd, buf, letters);
if (n == -1)
{
free(buf);
close(fd);
return (0);
}
buf[n] = '\0';
n = write(STDOUT_FILENO, buf, n);
if (n == -1 || n != (int)letters)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (n);
}
