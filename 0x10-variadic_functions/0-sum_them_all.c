#include <stdarg.h>

/**
 * sum_them_all - Sums up a variable number of arguments.
 * @n: The number of arguments.
 * @...: The variable arguments to be summed.
 *
 * Return: The sum of the variable arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int k;

	int total = 0;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
	total += va_arg(args, int);
	}

	va_end(args);

	return (total);
}
