#include <stdio.h>
/**
 * more_numbers - Prints the numbers from 0 to 14, ten times, followed by a new line.
 */
void more_numbers(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	putchar('0' + j / 10);
	}
	putchar('0' + j % 10);
	}
	putchar('\n');
	}
}
