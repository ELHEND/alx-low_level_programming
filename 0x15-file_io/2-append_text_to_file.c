#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file to append to
 * @text_content: content to append to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret, len = 0;

	if (filename == NULL)
		return (-1);

	if (!access(filename, W_OK))
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		if (text_content != NULL)
		{
			while (text_content[len] != '\0')
				len++;
			ret = write(fd, text_content, len);
			if (ret == -1)
			{
				close(fd);
				return (-1);
			}
		}

		close(fd);
		return (1);
	}
	return (-1);
}

