#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	printf("%d\n", mul);
	return (0);
}
