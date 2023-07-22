#include<stdio.h>
/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: The number of times the character '_' should be printed.
 *     If n is 0 or less, the function will only print '\n'.
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
	}
}
