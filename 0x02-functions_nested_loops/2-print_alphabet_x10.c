#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints the alphabet in lowercase 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
