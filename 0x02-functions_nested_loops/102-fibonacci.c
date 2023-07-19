#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *              separated by a comma and space, followed by a new line.
 *              It uses a loop to calculate the Fibonacci sequence and prints
 *              each number using the printf function.
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 50;
	int fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	
	for (i = 3; i <= limit; i++)
	{
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	printf("%d", fibonacci[0]);
	for (i = 1; i < limit; i++)
	{
	printf(", %d", fibonacci[i]);
	}

	printf("\n");

	return (0);
}
