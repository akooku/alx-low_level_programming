#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descr;
	ssize_t read_file, write_file;
	char *buffer;

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

	read_file = read(file_descr, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1 || write_file != read_file)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	free(buffer);
	close(file_descr);
	return (read_file);
}
