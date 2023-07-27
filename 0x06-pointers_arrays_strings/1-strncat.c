#include<stdio.h>
/**
 * _strncat - Concatenates at most n bytes from src to dest.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string to be appended to @dest.
 * @n: The maximum number of bytes from @src to be appended.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append at most n bytes from the source string to the destination string */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add a null-terminator at the end of the concatenated string */
	dest[dest_len + i] = '\0';

	return (dest);
}
