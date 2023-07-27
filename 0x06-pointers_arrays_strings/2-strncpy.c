#include<stdio.h>
/**
 * _strncpy - Copies at most n bytes of src to dest.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill remaining bytes in dest with null-terminators if needed */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
