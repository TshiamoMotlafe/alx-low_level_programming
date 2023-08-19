#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 * @...: The variable arguments to be printed.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int h = 0;

	char *space = "";

	va_start(args, format);

	while (format && format[h])
	{
	switch (format[h])
	{
	case 'c':
	printf("%s%c", space, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", space, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", space, va_arg(args, double));
	break;
	case 's':
	space = va_arg(args, char *);
	if (!space)
	space = "(nil)";
	printf("%s", space);
	break;
	}
	if (format[h + 1] == 'c' || format[h + 1] == 'i' || format[h + 1] == 'f' || format[h + 1] == 's')
	space = ", ";
	h++;
	}
	va_end(args);
	printf("\n");
}
	

