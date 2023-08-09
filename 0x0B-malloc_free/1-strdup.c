#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;

	unsigned int length;

	if (str == NULL)
	return (NULL);

	length = strlen(str) + 1;
	duplicate = malloc(length * sizeof(char));

	if (duplicate == NULL)
	return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
