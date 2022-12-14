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
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			tens = result / 10;
			ones = result % 10;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
