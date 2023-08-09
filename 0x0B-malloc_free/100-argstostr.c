#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: If ac is 0, av is NULL, or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int total_length;

	char *concatenated;

	int position;

	int i;

	int j;

	if (ac == 0 || av == NULL)
	return (NULL);
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
	if (av[i] != NULL)
	total_length += strlen(av[i]) + 1;
	}
	total_length++;
	concatenated = malloc(total_length * sizeof(char));
	if (concatenated == NULL)
	return (NULL);
	position = 0;
	for (j = 0; j < ac; j++)
	{
	if (av[j] != NULL)
	{
	strcpy(concatenated + position, av[j]);
	position += strlen(av[j]);
	concatenated[position++] = '\n';
	}
	}

	return (concatenated);
}
