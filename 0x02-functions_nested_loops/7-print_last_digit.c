#include <stdio.h>
#include <main.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the input number
 * Description: prints the last digit of a number
 * Return: the last digit of the input number
 */

int print_last_digit(int)
{
	int last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
