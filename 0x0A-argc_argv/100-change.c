#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins for change.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int cents;

	int num_coins;

	int count;

	int i;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
	count += cents / coins[i];
	cents %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
