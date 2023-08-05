#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 *@argv: An array of strings containing the command-line arguments.
 * Description: This program prints the number of arguments passed into it.
 *
 * Return: Always 0 (indicating success).
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
