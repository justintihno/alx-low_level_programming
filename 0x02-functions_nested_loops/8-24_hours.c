#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every hour and minute in a day
 * in the format "HH:MM", with each hour and minute on a new line.
 * Description: prints every minute of the day
 * @param None
 * @return void
 */

void jack_bauer(void)
{
	int hour, minute;

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
