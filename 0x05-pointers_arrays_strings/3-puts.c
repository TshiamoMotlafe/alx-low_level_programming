#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints the
 * characters of the string to the standard output using the putchar function
 * until it reaches the null terminator '\0'. It then prints a new line
 * character '\n' to add a line break after the string.
 */
void _puts(char *str)
{  
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}

	putchar('\n');
}
