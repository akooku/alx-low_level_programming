#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, len = 0;
	int bytes_written;
	mode_t allowed = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_APPEND | O_WRONLY, allowed);
	if (file_descr < 0)
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
