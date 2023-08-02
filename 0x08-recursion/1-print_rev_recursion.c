#include<unistd.h>
#include<stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: If the current character is the null terminator, end the recursion */
		return;
	}

	/* Move to the next character recursively */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	putchar(*s);
}
