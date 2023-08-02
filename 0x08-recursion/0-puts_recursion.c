#include<stdio.h>
#include <unistd.h>
/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: If the current character is the null terminator, end the recursion */
		putchar('\n');
		return;
	}

	/* Print the current character and move to the next character recursively */
	putchar(*s);
	_puts_recursion(s + 1);
}
