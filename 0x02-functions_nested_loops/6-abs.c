#include <unistd.h>
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 *
 * Description: This function computes the absolute value of the given integer.
 *              If n is positive or zero, it returns n.
 *              If n is negative, it returns the negation of n (positive value).
 */
int _abs(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}
