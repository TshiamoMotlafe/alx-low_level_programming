#include <stdio.h>
/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints every
 * other character of the string to the standard output (stdout) using the
 * putchar function. It starts with the first character and then prints every
 * alternate character until it reaches the null terminator '\0'. It then
 * prints a new line character '\n' to add a line break after the characters.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i += 2;
	}

	putchar('\n');
}
