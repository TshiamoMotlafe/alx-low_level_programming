#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of the even-valued terms in the
 *              Fibonacci sequence, where the terms do not exceed 4,000,000.
 *              It uses a loop to generate the Fibonacci sequence and adds
 *              the even-valued terms to the sum variable.
 *              Finally, it prints the sum followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1, num2 = 2, nextNum;
	int sum = 0;

	while (num1 <= limit)
{
	if (num1 % 2 == 0)
	sum += num1;
	{
	nextNum = num1 + num2;
	num1 = num2;
	num2 = nextNum;
	}
	printf("%d\n", sum);
}
	return (0);
}

