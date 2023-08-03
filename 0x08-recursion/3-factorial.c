/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of the number, or -1 if n is less than 0 (error).
 */
int factorial(int n)
{

	int i;

	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	
	/* Error case: Return -1 if n is less than 0 */
	if (n < 0)
	{
		return (-1);
	}
	/* Calculate factorial recursively */
	return (n * factorial(n - 1));
}
