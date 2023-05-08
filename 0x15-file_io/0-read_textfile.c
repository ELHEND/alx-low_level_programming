#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, or 0 if filename is NULL,
 * file cannot be opened or read, or letters is 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n;
char *buf;
if (!filename || letters == 0)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * (letters + 1));
if (!buf)
{
close(fd);
return (0);
}
n = read(fd, buf, letters);
if (n == -1)
{
close(fd);
free(buf);
return (0);
}
buf[n] = '\0';
printf("%s", buf);
close(fd);
free(buf);
return (n);
}

