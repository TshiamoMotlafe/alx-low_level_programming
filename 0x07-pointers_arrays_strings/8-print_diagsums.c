#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (1D array).
 * @size: Size of the square matrix (number of rows or columns).
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int pos_secondary_diag;

	int pos_main_diag;

	int sum1 = 0; /* Sum of the main diagonal (top-left to bottom-right) */

	int i;

	int sum2 = 0; /* Sum of the secondary diagonal (top-right to bottom-left) */

	if (a == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		/* Calculate the position of the element in the main diagonal */
		pos_main_diag = i * size + i;
		sum1 += a[pos_main_diag];

		/* Calculate the position of the element in the secondary diagonal */
		pos_secondary_diag = i * size + (size - 1 - i);
		sum2 += a[pos_secondary_diag];
	}

	printf("%d, ", sum1);
	
	printf("%d", sum2);
	printf("\n");
}
