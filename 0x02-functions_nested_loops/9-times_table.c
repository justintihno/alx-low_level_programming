#include<stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Description: prints the 9 times table
 * return void
 */

void times_table(void)
{
	int i, j, tens, ones, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (j = 1; j <= 9; j++)
	{
		result = i * j;
		tens = result / 10;
		ones = result % 10;
	if (tens > 0)
	{
		_putchar(tens + '0');
	}
		_putchar(ones + '0');
		_putchar(',');
		 _putchar(' ');
	}
		_putchar('\n');
	}
}
