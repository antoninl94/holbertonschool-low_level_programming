#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will print all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, n;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
