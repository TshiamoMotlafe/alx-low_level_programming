#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	/* Recursively print each digit */
	if (n / 10 != 0)
		print_number(n / 10);

	/* Print the last digit */
	putchar((n % 10) + '0');
}
