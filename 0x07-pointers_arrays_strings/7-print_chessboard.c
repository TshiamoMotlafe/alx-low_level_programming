#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int j;

	int i;

	/* Check if the pointer to the array is valid */
	if (a == NULL)
		return;

	/* Loop through the 2D array and print the elements */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
}
