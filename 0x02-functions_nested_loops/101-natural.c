#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 *              below 1024 (excluding 1024), followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < limit; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	sum += i;
	}

	printf("%d\n", sum);

	return (0);
}

