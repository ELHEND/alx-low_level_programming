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

/**
 * main - Entry point
 * This function reads the contents of
 * a text file and prints them to standard output.
 * @argc: The number of arguments passed to the program (should be 1).
 * @argv: An array of strings containing the arguments passed to the program.
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
const char *filename = "example.txt";
size_t letters = 100;
ssize_t n;
n = read_textfile(filename, letters);
printf("\nThe actual number of letters read and printed is %ld\n", n);
return (0);
}

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

