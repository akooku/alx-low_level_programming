#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descr;
	char *buffer;
	ssize_t text_read, text_written;

	if (filename == NULL)
		return (0);

	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descr);
		return (0);
	}

	text_read = read(file_descr, buffer, letters);
	if (text_read == -1)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	text_written = write(STDOUT_FILENO, buffer, text_read);
	if (text_written == -1 || text_written != text_read)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	free(buffer);
	close(file_descr);

	return (text_read);
}
