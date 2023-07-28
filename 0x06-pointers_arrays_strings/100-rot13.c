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

	char base;

	int length = 0;

	char c;

	while ((c = str[length]) != '\0')
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
		base = (c >= 'a') ? 'a' : 'A';
			c = (c - base + 13) % 26 + base;
		}

		result[length] = c;
		length++;
		result = realloc(result, (length + 1) * sizeof(char));
		
	}

	result[length] = '\0';
	return (result);
}
