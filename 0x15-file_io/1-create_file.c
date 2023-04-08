#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descr, write_file;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (file_descr == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (len != '\0')
		{
			len++;
		}

		write_file = write(file_descr, text_content, len);

		if (write_file == -1 || write_file != len)
		{
			close(file_descr);
			return (-1);
		}
	}

	close(file_descr);
	return (1);
}
