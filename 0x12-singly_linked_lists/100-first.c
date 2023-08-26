#include <stdio.h>
void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints a message before the main function is executed.
 *
 * Description: This function is marked with the __attribute__((constructor))
 * attribute, which causes it to be executed before the main function starts.
 * It prints the message "You're beat! and yet, you must allow," followed by
 * "I bore my house upon my back!".
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

