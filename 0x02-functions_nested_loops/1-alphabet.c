#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
