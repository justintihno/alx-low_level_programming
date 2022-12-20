#include "main.h"

/**
 * puts2 - prints every other character of a string, starting eoth the first
 * character followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	for
		(str[i] != '\0';
		 i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
