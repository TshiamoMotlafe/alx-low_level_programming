#include <stdio.h>
/**
 * print_square - Prints a square followed by a new line.
 *
 * @size: The size of the square.
 *        If size is 0 or less, the function will print only a new line.
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
}
