#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point prints the sign of a number
 * Description: prints the sign of a number and
 * returns 1 if the number is +, 0 if it is 0,
 * and -1 if it is -
 * @n: variable
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
