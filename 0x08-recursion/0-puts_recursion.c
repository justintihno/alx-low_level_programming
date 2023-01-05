#include "main.h"

/**
 * _recursion - prints a string, followed by a new line.
 * @s: string to be printed
 * Return : a new line
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n')
}
