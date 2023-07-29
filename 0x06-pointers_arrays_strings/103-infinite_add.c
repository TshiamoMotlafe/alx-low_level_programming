#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result (r), or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);

	int len2 = strlen(n2);

	int carry = 0;

	int max_len = len1 > len2 ? len1 : len2;

	int digit1;

	int digit2;

	int sum;

	int i;

	if (max_len + 1 > size_r)
		return (0);

	r[max_len + 1] = '\0';

	for (i = 0; i < max_len || carry; i++)
	{
		digit1 = (i < len1) ? (n1[len1 - i - 1] - '0') : 0;
		digit2 = (i < len2) ? (n2[len2 - i - 1] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[max_len - i] = (sum % 10) + '0';
	}

	if (max_len >= size_r)
		return (0);

	if (r[0] == '0')
	{
		/* Shift the result to remove leading zero */
		for (i = 0; i < max_len; i++)
			r[i] = r[i + 1];
	}

	return (r);
}
