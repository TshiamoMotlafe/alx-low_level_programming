#include <unistd.h>
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, repeated 10 times,
 *                      with each letter on a new line
 *
 * Description: This function prints the alphabet in lowercase, repeated
 *              10 times. Each letter is printed on a new line.
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
		putchar('\n');
	}
	
}
