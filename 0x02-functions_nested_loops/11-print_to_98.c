#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the starting
 *              number n up to 98. The numbers are printed in ascending order,
 *              separated by a comma and space. The last number printed is 98.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
			n--;
		else
			n++;
	}

	printf("98\n");
}
