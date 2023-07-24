#include<stdio.h>
/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest (the destination buffer).
 *
 * Description:
 * This function copies the characters of the null-terminated string pointed to
 * by `src` to the buffer pointed to by `dest`. It also copies the null terminator
 * '\0' at the end to properly terminate the string in the destination buffer.
 * The function assumes that the destination buffer has enough space to hold
 * the entire source string, including the null terminator.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (original_dest);
}
