#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return(0);
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		/* Print hex content */
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		/* Print character content */
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				if (isprint(b[i + j]))
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
