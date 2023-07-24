#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and reverses the
 * order of the characters in-place, modifying the original string.
 */
void rev_string(char *s)
{
	int start = 0;

	int end = strlen(s) - 1;

	while (start < end)
	{
	char temp = s[start];

	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}
