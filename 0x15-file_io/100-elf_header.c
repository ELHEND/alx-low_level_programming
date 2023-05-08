#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 64

int main(int argc, char *argv[])
{
	int fd;
	char buf[BUF_SIZE];

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Failed to open file %s\n", argv[1]);
		exit(98);
	}

ssize_t num_read = read(fd, buf, BUF_SIZE);

if (num_read != BUF_SIZE || buf[0] != 0x7f ||
		    buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
{
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	/* Extract ELF header information here */

	printf("ELF Header:\n");
	/* Display extracted information in required format here */

	close(fd);
	return (0);
}

