#include<stdio.h>
/**
 * Prints every hour and minute in a day in the format "HH:MM", with each hour and minute on a new line.
 * @param None
 * @return void
 */

void jack_bauer(void)
{
	int hour;
	int minute;
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}
