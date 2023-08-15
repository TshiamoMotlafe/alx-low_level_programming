#ifndef MYMATHMACROS_H
#define MYMATHMACROS_H

/**
 * ABS - Computes the absolute value of a number x.
 * @x: The number for which the absolute value is computed.
 *
 * Description: This macro calculates the absolute value of a number x.
 * It returns x if x is non-negative, and -x if x is negative.
 *
 * Return: The absolute value of the input number.
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif /* MYMATHMACROS_H */
