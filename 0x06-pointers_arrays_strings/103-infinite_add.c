#include<stdio.h>
#include <string.h>
void reverse_string(char *str)
{
        int i, j;
        char temp;

        for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
        {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
        }
}
int strlen(char *str)
{
        int len = 0;
        while (str[len] != '\0')
                len++;
        return (len);
}
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string @r, or NULL if the result
 *         cannot be stored in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, max_len = 0, carry = 0;
	int index_n1 = 0, index_n2 = 0, index_r = 0;
	int digit_n1 = 0, digit_n2 = 0, sum = 0, result_digit = 0;

	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	max_len = (len_n1 > len_n2) ? len_n1 : len_n2;

	/* Check if the result can be stored in the buffer */
	if (max_len + 1 > size_r)
		return (NULL);

	index_n1 = len_n1 - 1;
	index_n2 = len_n2 - 1;

	/* Perform addition from right to left */
	while (index_n1 >= 0 || index_n2 >= 0 || carry)
	{
		digit_n1 = (index_n1 >= 0) ? n1[index_n1] - '0' : 0;
		digit_n2 = (index_n2 >= 0) ? n2[index_n2] - '0' : 0;

		sum = digit_n1 + digit_n2 + carry;
		carry = sum / 10;
		result_digit = sum % 10;

		/* Check if the result can be stored in the buffer */
		if (index_r >= size_r - 1)
			return (NULL);

		r[index_r] = result_digit + '0';
		index_r++;
		index_n1--;
		index_n2--;
	}

	r[index_r] = '\0'; /* Null-terminate the result */

	/* Reverse the result string to get the correct order */
	reverse_string(r);

	return (r);
}
