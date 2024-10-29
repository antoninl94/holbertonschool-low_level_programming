#include <stdio.h>

/**
 * fizz_buzz - will print number from 1 to 100
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" %s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" %s", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" %s", "Fizz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	putchar('\n');
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
