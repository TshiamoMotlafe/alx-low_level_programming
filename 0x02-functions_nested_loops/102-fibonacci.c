#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *              separated by a comma and space, followed by a new line.
 *              It uses a loop to calculate the Fibonacci sequence and prints
 *              each number using the printf function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long long num1 = 1, num2 = 2, nextNum, count;

	printf("%llu, %llu", num1, num2);

	for (count = 3; count <= 50; count++)
	{
	nextNum = num1 + num2;
	printf(", %llu", nextNum);
	num1 = num2;
	num2 = nextNum;
	}

	printf("\n");

	return (0);
}
