#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 *
 * Description:
 * This function takes a pointer to a string and converts it to an integer.
 * It takes into account any leading '+' or '-' signs and ignores other
 * characters that are not digits. If there are no valid digits in the
 * string, the function returns 0.
 */
int _atoi(char *s)
{
	int result = 0;

	int sign = 1;

	int i = 0;

	while (s[i] == ' ')
	{
	i++;
	}
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > (INT_MAX - (s[i] - '0'))/10)
        {
            return (sign == -1) ? INT_MIN : INT_MAX;	
	}
	result = result*10 + (s[i] - '0');
	i++;
	}
	}
	return (sign*result);
}
