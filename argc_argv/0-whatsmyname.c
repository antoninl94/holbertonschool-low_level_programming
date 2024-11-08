#include <stdio.h>

/**
 * main - argc argv
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]++);
	}
	return (0);
}
