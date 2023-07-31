#include<stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be analyzed
 * @accept: Pointer to the string containing the accepted characters
 *
 * Return: The number of bytes in the initial segment of s, which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i;

	int is_accept_char;

	/* Check if the pointers to the strings are valid */
	if (s == NULL || accept == NULL)
		return (0);

	while (*s != '\0')
	{
		is_accept_char = 0;

		/* Check if the current character in s is in accept */
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				is_accept_char = 1;
				break;
			}
		}

		/* If the current character is not in accept, stop the loop */
		if (!is_accept_char)
			break;

		/* Increment the count and move to the next character in s */
		count++;
		s++;
	}

	return (count);
}
