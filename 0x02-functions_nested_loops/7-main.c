#include "main.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
    
    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
