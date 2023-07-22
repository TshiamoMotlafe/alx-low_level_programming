#include <stdio.h>
/**
 * print_triangle - Prints a triangle followed by a new line.
 *
 * @size: The size of the triangle.
 *        If size is 0 or less, the function will print only a new line.
 */
void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	/* Print spaces */
	for (j = 1; j <= size - i; j++)
	{
	putchar(' ');
	}
	/* Print hashes*/
	for (j = 1; j <= i; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
}
