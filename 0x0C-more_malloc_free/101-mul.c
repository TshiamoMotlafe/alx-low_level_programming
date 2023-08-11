#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect input.
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, result;

	int i, j;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return 98;
	}
	}
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);
	return (0);
}
