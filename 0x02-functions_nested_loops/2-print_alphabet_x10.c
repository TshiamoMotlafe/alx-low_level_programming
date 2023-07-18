#include <unistd.h>
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, repeated 10 times
 *
 * Description: This function prints the alphabet in lowercase, repeated
 *              10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
}
