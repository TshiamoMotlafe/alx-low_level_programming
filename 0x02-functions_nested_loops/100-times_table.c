#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: The number of times table to print
 *
 * Description: This function prints the n times table, starting from 0,
 *              up to the multiplication of n by n.
 *              It uses nested loops to iterate over the rows and columns,
 *              and prints each product using the printf function.
 *              The numbers are formatted to align properly.
 *              If n is greater than 15 or less than 0, does not print anything.
 */
void print_times_table(int n)
{
	int row, column;
	if (n < 0 || n > 15)
        return;

	for (row = 0; row <= n; row++)
	{
        for (column = 0; column <= n; column++)
	{
	int product = row * column;

	printf("%3d", product);
        }

        printf("\n");
	}
}
