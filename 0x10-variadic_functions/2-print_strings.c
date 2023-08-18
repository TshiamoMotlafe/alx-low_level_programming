#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The variable strings to be printed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int m;

	char *str;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && m < n - 1)
	printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
