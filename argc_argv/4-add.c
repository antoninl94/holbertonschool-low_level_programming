#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			add = add + atoi(argv[i]);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", add);
	return (0);
}
