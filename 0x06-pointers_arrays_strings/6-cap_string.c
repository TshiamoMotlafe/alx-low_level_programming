#include<stdio.h>
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	i = 0;

	if (str == NULL)
        return (NULL);

	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;

	while (str[i] != '\0')
	{
 	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	i++;
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	}
	else
	{	
	i++;
	}
	}
	return (str);
}
