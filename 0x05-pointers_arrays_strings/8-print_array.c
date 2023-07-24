#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * Description:
 * This function takes a pointer to an array of integers and the number of elements
 * `n` to be printed. It then prints the first `n` elements of the array to the
 * standard output (stdout) using the printf function. The numbers are separated
 * by a comma and a space, and the output order is the same as they are stored in
 * the array.
 */
void print_array(int *a, int n)
{
	int i;
	if (n <= 0)
	{
	return;
	}

	for (i = 0; i < n - 1; i++)
	{
	printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
