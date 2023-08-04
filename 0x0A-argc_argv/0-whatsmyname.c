#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc - The number of command-line arguments passed to the program.
 * @argv - An array of strings containing the command-line arguments.
 * Description: This program prints its name followed by a new line.
 * If you rename the program, it will print the new name,
 * You should not remove the path before the name of the program.
 *
 * Return: Always 0 (indicating success).
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
