#include<stdio.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string to be converted to uppercase.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	int i;

	/* Loop through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Convert lowercase letters to uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
