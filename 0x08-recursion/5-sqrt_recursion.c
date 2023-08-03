#include <stdio.h>

/**
 * _sqrt_recursive - Helper function to calculate the natural square root of a number.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursive(int n, int guess)
{
	int sqrt = guess * guess;

	if (sqrt == n)
	{
	return (guess);
	}
	else if (sqrt > n || guess * guess > n)
	{
	return (-1);
	}
	return (_sqrt_recursive(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input number.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_recursive(n, 1));
}
