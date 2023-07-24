#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints the
 * second half of the string to the standard output (stdout) using the
 * putchar function. If the number of characters in the string is odd,
 * the function prints the last n characters of the string, where
 * n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int start;

	if (length % 2 == 0)
	{
	start = length / 2;
	}else
	{
	start = (length - 1) / 2;
	}

	while (str[start] != '\0') {
	putchar(str[start]);
	start++;
	}
	putchar('\n');
}
