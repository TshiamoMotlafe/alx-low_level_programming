#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints the
 * characters of the string in reverse order to the standard output (stdout)
 * using the putchar function. It then prints a new line character '\n'
 * to add a line break after the reversed string.
 */
void print_rev(char *s)
{
	int length = 0;
	char *end = s;

	while (*end != '\0')
	{
	length++;
	end++;
	}

	while (length > 0)
	{
	end--;
	putchar(*end);
	length--;
	}
	putchar('\n');
}
