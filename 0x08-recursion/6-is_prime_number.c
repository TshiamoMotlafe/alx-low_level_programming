#include <stdio.h>
/**
 * is_prime_recursive - function to check if a number is prime recursively.
 * @n: The input number.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
	{
	return (0);
	}

	if (n == 2)
	{
	return (1);
	}

	if (divisor * divisor > n)
	{
	return (1);
	}

	if (n % divisor == 0)
	{
	return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}
/**
 * is_prime_number - Check if a number is prime.
 * @n: The input number.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
