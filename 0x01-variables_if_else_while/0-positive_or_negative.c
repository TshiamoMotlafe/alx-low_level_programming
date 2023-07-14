#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * This function serves as the entry point for the program execution.
 * It initializes necessary resources, performs the main logic, and
 * returns the exit status.
 *
 * Return: The exit status of the program.
 */
int main(void)
{
	int n;
	/* Initialize random number generator */
	srand(time(0));
	/* Generate a random number */
	n = rand() - RAND_MAX / 2;
 /* Check if the number is positive, negative, or zero and Print the value of n and its sign */
	if (n > 0)
{
        printf("%d is positive\n", n);
}	 else if (n == 0)
{
        printf("%d is zero\n", n);
} 	else 
{
        printf("%d is negative\n", n);
}

    return 0;
}
