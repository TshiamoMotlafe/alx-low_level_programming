#include<stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the input string to search
 * @accept: Pointer to the string containing the bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	
	/* Check if the pointers to the strings are valid */
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')
	{
		/* Check if the current character in s is in accept */
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		/* Move to the next character in s */
		s++;
	}

	return (NULL);
}
