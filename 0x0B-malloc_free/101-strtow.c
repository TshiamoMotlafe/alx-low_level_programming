#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: If str is NULL, empty, or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words;

	char **words;

	int word_idx;

	char *token;

	int i;

	if (str == NULL || *str == '\0')
	return (NULL);

	num_words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	num_words++;
	}

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	word_idx = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
	words[word_idx] = strdup(token);
	if (words[word_idx] == NULL)
	{
	for (i = 0; i < word_idx; i++)
	free(words[i]);
	free(words);
	return (NULL);
	}
	word_idx++;
	token = strtok(NULL, " ");
	}
	words[word_idx] = NULL;

	return (words);
}
