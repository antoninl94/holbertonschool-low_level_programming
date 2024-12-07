#include "main.h"

/**
 * create_file - Function to create a file and write in
 * @filename: the name of the file to create
 * @text_content: the string to write in filename
 * Return: 1 (Success) or -1 (Failed)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	fd = creat(filename, 0600);
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
