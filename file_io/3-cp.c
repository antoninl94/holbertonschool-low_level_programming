#include "main.h"

/**
 * createFile - Function to create a file and write in
 * @filename: the name of the file to create
 * Return: 1 (Success) or -1 (Failed)
 */
int createFile(const char *filename)
{
	int fd;

	fd = open(filename, O_CREAT, 0661);
	if (fd == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * copy - read a text file and print it in another
 * @fileFrom: the name of the file to read
 * @fileTo: The file to print in
 * @letters: the number of char to print in the buffer
 * Return: the number of bytes written on success or -1
 * if it failed
 */
ssize_t copy(const char *fileFrom, const char *fileTo)
{
	char *buffer;
	ssize_t written, reading;
	int fdFrom;
	int fdTo;

	fdFrom = open(fileFrom, O_RDONLY);
	if (fdFrom == -1)
		return (0);
	fdTo = open(fileTo, O_WRONLY);
	if (fdTo == -1)
		return (0);
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		close(fdTo);
		return (0);
	}
	reading = read(fdFrom, buffer, 1024);
	if (reading == -1)
	{
		free(buffer);
		close(fdFrom);
		return (0);
	}
	written = write(fdTo, buffer, reading);
	if (written == -1 || written != reading)
	{
		free(buffer);
		close(fdTo);
		close(fdFrom);
		return (0);
	}
	free(buffer);
	close(fdFrom);
	close(fdTo);
	return (written);
}

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: name of the argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to", 28);
		exit(97);
	}
	createFile(argv[2]);
	copy(argv[1], argv[2]);
	if (copy(argv[1], argv[2]) == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file argv[1]", 45);
		exit(98);
	}
	if (createFile(argv[2]) == -1 || copy(argv[1], argv[2], 1024) == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to argv[2]", 39);
		exit(99);
	}
	return (0);
}
