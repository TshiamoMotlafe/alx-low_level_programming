#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, strlen(message));
    return 1;
}
