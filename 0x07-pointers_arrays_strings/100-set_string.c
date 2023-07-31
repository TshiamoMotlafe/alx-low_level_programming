#include<stdio.h>
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be set.
 * @to: Pointer to the string whose value will be set to the pointer.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	if (s == NULL)
		return;

	*s = to;
}
