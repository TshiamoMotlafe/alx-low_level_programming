#include <stdio.h>
/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* Check if the character is within the ASCII range for uppercase letters */
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
