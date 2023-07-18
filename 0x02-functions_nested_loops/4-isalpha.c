#include <unistd.h>

/**
 * _isalpha - Checks if a character is alphabetic (lowercase or uppercase)
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}

/**
 * write_result - Writes the result to the standard output
 * @result: The result to be written
 *
 * Description: Converts the result to a string and writes it to the standard
 * output using the write function.
 */
void write_result(int result)
{
	char output[2];
	output[0] = result + '0';
	output[1] = '\n';
	write(STDOUT_FILENO, output, 2);
}
