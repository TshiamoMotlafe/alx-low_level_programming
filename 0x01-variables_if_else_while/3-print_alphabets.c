#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    /* Function body */
	 char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
