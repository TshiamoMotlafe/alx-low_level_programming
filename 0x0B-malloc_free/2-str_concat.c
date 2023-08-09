#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If memory allocation fails or both strings are NULL, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	unsigned int len1 = 0, len2 = 0, total_len = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	concatenated = malloc(total_len * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
