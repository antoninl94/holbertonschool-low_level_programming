#include "main.h"

/**
 * append_text_to_file - Function to append text to file
 * @filename: the name of the file
 * @text_content: the text to append to a file
 * Return: 1 (Success), -1 (Failed)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
