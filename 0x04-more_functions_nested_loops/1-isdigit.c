#include <stdio.h>
/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	/* Check if the character is within the ASCII range for digits */
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}

