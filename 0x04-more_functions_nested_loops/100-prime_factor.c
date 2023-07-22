#include <stdio.h>

/**
 * is_prime - Checks if a number is prime.
 *
 * @num: The number to be checked.
 * 
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int  num)
{
	int i;
    if (num <= 1)
        return (0);

    for ( i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return (0);
    }

    return (1);
}
/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 *
 * @num: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the number.
 */
int largest_prime_factor(int  num)
{
    int  largest_factor = 1;
int i;
    for ( i = 2; i * i <= num; i++)
    {
        if (num % i == 0 && is_prime(i))
        {
            largest_factor = i;
            while (num % i == 0)
            {
                num /= i;
            }
        }
    }

    if (num > 1)
        largest_factor = num;

    return largest_factor;
}

int main()
{
    int  number = 612852475143;
 int  largest_prime = largest_prime_factor(number);

    printf("%llu\n", largest_prime);
    return (0);
}
