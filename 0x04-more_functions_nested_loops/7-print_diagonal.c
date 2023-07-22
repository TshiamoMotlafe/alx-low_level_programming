#include <stdio.h>


/**
 * print_diagonal - Draws a diagonal line in the terminal.
 *
 * @n: The number of times the character '\' should be printed.
 *     If n is 0 or less, the function will print only a new line.
 */
void print_diagonal(int n)
{
	int i, j;
    if (n <= 0)
    {
        putchar('\n');
    }
    else
    {
        

        for (i = 0; i < n; i++)
        {
            
            for (j = 0; j < i; j++)
            {
                putchar(' ');
            }

          
            putchar('\\');
            putchar('\n');
        }
    }
}

