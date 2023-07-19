#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 *
 * Description: This function prints the last digit of the given number and returns it.
 *              It extracts the last digit by taking the absolute value of n modulo 10.
 *              The result is printed and returned.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	putchar(last_digit + '0');

	return last_digit;
}
