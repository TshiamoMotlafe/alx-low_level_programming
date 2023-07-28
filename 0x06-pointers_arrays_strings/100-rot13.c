#include <stdio.h>
#include <stdlib.h>
/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the newly allocated encoded string.
 */
char *rot13(char *str)
{
	char *result = malloc(sizeof(char));

	int length = 0;

	char rotate_offset;

	char c;

	while ((c = str[length]) != '\0')
	{
	rotate_offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	c = (c - rotate_offset + 13) % 26 + rotate_offset;
	}

	result[length] = c;
	length++;
	result = realloc(result, (length + 1) * sizeof(char));
	}
	result[length] = '\0';
	return (result);
}
