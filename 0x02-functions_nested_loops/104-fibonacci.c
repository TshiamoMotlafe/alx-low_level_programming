#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2, separated by a comma and space,
 *              followed by a new line.
 *              It uses a loop to generate the Fibonacci sequence and
 *              prints each number using the printf function.
 *              The Fibonacci numbers are calculated using two variables
 *              to keep track of the previous two numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned int count;
	unsigned int num1 = 1, num2 = 2, nextNum;

	printf("%d, %d", num1, num2);

	for (count = 3; count <= 98; count++)
	{
	nextNum = num1 + num2;
	printf(", %d", nextNum);

	num1 = num2;
	num2 = nextNum;
	}

	printf("\n");

	return (0);
}

