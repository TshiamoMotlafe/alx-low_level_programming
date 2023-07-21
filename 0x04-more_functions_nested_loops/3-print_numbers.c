#include <stdio.h>

int _putchar(char c);

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	char digit; 
	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}
	putchar('\n');
}
