#include "main.h"

/**
 * _perror - a function that prints an error message
 *
 * @msg: error message to be printed
 * @filename: the name of the file
 * @exit_code: exit code number
 *
 * Return: void
 */

void _perror(const char *msg, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(exit_code);
}

/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: NULL terminated array of strings
 *
 * Return: 0 on success; exit code otherwise
 */

int main(int argc, char **argv)
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t bytes_read = 1, bytes_written;
	char buffer[BUFFER];
	mode_t allowed = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		_perror("Usage: cp file_from file_to\n", "", 97);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		_perror("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, allowed);
	if (fd_to == -1)
		_perror("Error: Can't write to %s\n", file_to, 99);

	while (bytes_read > 0)
	{
		bytes_read = read(fd_from, buffer, BUFFER);
		if (bytes_read == -1)
			_perror("Error: Can't read from file %s\n", file_from, 98);

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			_perror("Error: Can't write to %s\n", file_to, 99);
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

	return (0);
}
