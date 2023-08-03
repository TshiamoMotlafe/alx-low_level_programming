#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - Helper function to check if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
	return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	return (is_palindrome_recursive(s, 0, len -1));
}
