#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table, starting from 0,
 *              up to the multiplication of 9 by 9.
 *              It uses nested loops to iterate over the rows and columns,
 *              and prints each product using the printf function.
 *              The numbers are formatted to align properly.
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int product = row * column;
			printf("%2d", product);

			if (column != 9)
				printf(", ");
		}

		printf("\n");
	}
}
