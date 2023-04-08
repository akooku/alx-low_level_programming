#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, write_file, len = 0;
	mode_t mode;

	if (filename == NULL)
		return (-1);

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_descr = open(filename, O_APPEND | O_WRONLY, mode);
	if (file_descr == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
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
