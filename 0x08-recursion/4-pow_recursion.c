#include<unistd.h>
#include<stdio.h>
/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The value of x raised to the power of y.
 *         If y is less than 0, return -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	/* Error case: Return -1 if y is less than 0 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: If the exponent is 0, return 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Calculate x raised to the power of y recursively */
	return (x * _pow_recursion(x, y - 1));
}
