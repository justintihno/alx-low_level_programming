#include<stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Description: prints the 9 times table
 * return void
 */

void times_table(void);
{
	int i, tens, ones;

	for (i = 0; i <= 9; i++)
	{
		tens = i / 10;
		ones = i % 10;
		if (tens > 0)
		{
			_putchar(tens + '0');
		}
		_putchar(ones + '0');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar('9');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		tens = (i * 9) / 10;
		ones = (i * 9) % 10;
		if (tens > 0)
		{
			_putchar(tens + '0');
		}
		_putchar(ones + '0');
		_putchar('\n');
	}
}
