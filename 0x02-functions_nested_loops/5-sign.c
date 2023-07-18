#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 *
 * Description: Prints the sign of the given number as per the specified conditions.
 *              If n is greater than zero, it prints "+" and returns 1.
 *              If n is zero, it prints "0" and returns 0.
 *              If n is less than zero, it prints "-" and returns -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return -1;
	}
}
