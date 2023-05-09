#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descr;
	int bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descr == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		bytes_written = write(file_descr, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(file_descr);
			return (-1);
		}
	}

	close(file_descr);
	return (1);

}
