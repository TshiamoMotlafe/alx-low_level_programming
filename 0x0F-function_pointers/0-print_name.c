#include <stdio.h>

/**
 * print_name - Prints a name using a custom printing function.
 * @name: The name to be printed.
 * @f: A function pointer to the custom printing function.
 *
 * This function takes a name and a function pointer as input. It then calls
 * the provided printing function to print the name using the specified format.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
