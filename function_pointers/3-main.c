#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Result if it's ok, Error if incorrect
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
