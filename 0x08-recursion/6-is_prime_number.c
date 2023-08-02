#include<stdio.h>
#include<unistd.h>
/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	/* Base cases: 0, 1, and negative numbers are not prime */	
	if (n <= 1)
	{
	return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
	/* If n is divisible by any number in the loop, it's not prime */
	return (0);
	}
	}
	return (1);
}
