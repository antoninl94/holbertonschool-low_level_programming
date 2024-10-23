#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will print the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
