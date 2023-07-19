#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of the day of Jack Bauer
 *              from 00:00 to 23:59 in the format "HH:MM".
 *              It uses nested loops to iterate over the hours and minutes,
 *              and prints each minute using the printf function.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
