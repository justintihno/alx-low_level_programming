#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to  the string to be printed
 */

void puts_half(char *str)
{
	int i, len;

	for
		(len = 0; str[len] != '\0'; len++);
	for
		(i = (len - 1) / 2 + 1; i < len; i++)
			_putchar(str[i]);
	_putchar('\n');
}
