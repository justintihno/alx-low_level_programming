#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point prints the sign of a number
 * Description: prints the sign of a number and returns 1 if the number is positive, 0 if it is zero, and -1 if it is negative
 * @n: variable
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
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
