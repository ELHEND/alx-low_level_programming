#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and printed
 * Return: actual number of letters read and printed, or 0 if there's an error
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to which the text should be appended
 * @text_content: text to be appended to the file
 * Return: 1 if the operation was successful, or -1 if there was an error
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * create_file - creates a new file with the given text content
 * @filename: name of the file to be created
 * @text_content: text to be written to the file
 * Return: 1 if the operation was successful, or -1 if there was an error
 */
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */

