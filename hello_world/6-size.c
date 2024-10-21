#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(long long));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));
	
	return (0);	
}
