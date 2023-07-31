#include<stdio.h>
/**
 * _strchr - Locates the first occurrence of character c in string s
 * @s: Pointer to the input string
 * @c: Character to be located
 *
 * Return: A pointer to the first occurrence of character c in string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	/* Check if the pointer to the string is valid */
	if (s == NULL)
		return (NULL);

	/* Traverse the string to find the character c */
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* If character c is not found, return NULL */
	return (NULL);
}
