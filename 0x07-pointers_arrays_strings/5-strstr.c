#include<stdio.h>
/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	/* Check if the pointers to the strings are valid */
	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;
		/* Check if the substring is found starting from the current position */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		/* If the substring is found, return the starting position in haystack */
		if (*n == '\0')
			return (haystack);

		/* Move to the next character in haystack */
		haystack++;
	}
	return (NULL);
}
