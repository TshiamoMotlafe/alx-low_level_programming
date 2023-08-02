#include<unistd.h>
#include<stdio.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of the number.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	/* Start searching for the square root from 1 to n */
	int start = 1;

	int end = n;

	int result = -1;

	int mid;

	/* Base case: If n is 0 or 1, return n */
	if (n == 0 || n == 1)
	{
	return (n);
	}
	/* Use binary search to find the square root */
	while (start <= end)
	{
	mid = (start + end) / 2;

	if (mid * mid == n)
	{
	result = mid;
	break;
	}
	else if (mid * mid < n)
	{
	/* If the square of mid is less than n, search in the right half */
	start = mid + 1;
	result = mid;
	}	
	else
	{
	/* If the square of mid is greater than n, search in the left half */
	end = mid - 1;
	}
	}
	return (result);
}
