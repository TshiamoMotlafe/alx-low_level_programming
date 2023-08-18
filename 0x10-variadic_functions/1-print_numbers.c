#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable integers to be printed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
	printf("%d", va_arg(args, int));

	if (separator != NULL && j < n - 1)
	printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
