#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int validate_args(int argc);
int open_file(const char *file_path, int flags, mode_t mode);
int copy_fd(int fd_from, int fd_to);

/**
 *  * validate_args - validates that the number of arguments is correct.
 *   *
 *    * @argc: argument count.
 *     *
 *      * Return: 0 on success, or an error code on failure.
 */
int validate_args(int argc)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp SOURCE DEST\n");
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

/**
 *  * open_file - opens a file with the given path and flags.
 *   *
 *    * @file_path: path to the file.
 *     * @flags: file opening flags.
 *      * @mode: file permission flags.
 *       *
 *        * Return: file descriptor on success, or -1 on failure.
 */
int open_file(const char *file_path, int flags, mode_t mode)
{
	int fd;

	fd = open(file_path, flags, mode);
	if (fd == -1)
		perror(file_path);

	return (fd);
}

/**
 *  * copy_fd - copies the content of one file descriptor to another.
 *   *
 *    * @fd_from: source file descriptor.
 *     * @fd_to: destination file descriptor.
 *      *
 *       * Return: 0 on success, or an error code on failure.
 */
int copy_fd(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_ret, write_ret;

	do {
		read_ret = read(fd_from, buffer, BUFFER_SIZE);
		if (read_ret == -1)
		{
			perror("read");
			return (EXIT_FAILURE);
		}

		write_ret = write(fd_to, buffer, read_ret);
		if (write_ret == -1 || write_ret != read_ret)
		{
			perror("write");
			return (EXIT_FAILURE);
		}
	} while (read_ret > 0);

	return (EXIT_SUCCESS);
}

/**
 *  * main - entry point.
 *   *
 *    * @argc: number of command-line arguments.
 *     * @argv: array of pointers to command-line arguments.
 *      *
 *       * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (validate_args(argc) == EXIT_FAILURE)
		return (EXIT_FAILURE);

	fd_from = open_file(argv[1], O_RDONLY, 0);
	if (fd_from == -1)
		return (EXIT_FAILURE);

	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		return (EXIT_FAILURE);
	}

	if (copy_fd(fd_from, fd_to) == EXIT_FAILURE)
	{
		close(fd_from);
		close(fd_to);
		return (EXIT_FAILURE);
	}

	if (close(fd_from) == -1)
		perror("close");

	if (close(fd_to) == -1)
		perror("close");

	return (EXIT_SUCCESS);
}
