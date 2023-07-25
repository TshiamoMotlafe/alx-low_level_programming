#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 10
/**
 * generate_random_char - Generates a random printable character.
 *
 * Return: The generated random character.
 *
 * Description:
 * This function generates a random printable character in the range of
 * ASCII characters from '!' to '~'.
 */
char generate_random_char()
{
	return (rand() % 94) + 33;
}
/**
 * generate_random_password - Generates a random valid password.
 * @password: Pointer to the buffer to store the generated password.
 *
 * Description:
 * This function generates a random valid password of a fixed length
 * (PASSWORD_LENGTH). It uses the generate_random_char function to
 * generate random printable characters for the password.
 */
void generate_random_password(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	password[i] = generate_random_char();
	}
	password[PASSWORD_LENGTH] = '\0';
}

int main()
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(0));

	generate_random_password(password);

	printf("Random Password: %s\n", password);

	return (0);
}
