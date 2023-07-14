#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function serves as the entry point for the program execution.
 * It initializes necessary resources, performs the main logic, and
 * returns the exit status.
 *
 * Return: The exit status of the program.
 */
int main() {
 int n;
 srand(time(0));
 n = rand() - RAND_MAX / 2;
printf( n);
  if (n > 0) {
        printf("%d", n,"is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
