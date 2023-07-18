#include <stdio.h>
#include <unistd.h>
/**
 * _islower - Checks if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z'){
		return 1;
}
		return 0;
}
void write_result(int result) {
    char output[2];
    output[0] = result + '0';
    output[1] = '\n';
    write(STDOUT_FILENO, output, 2);
}
