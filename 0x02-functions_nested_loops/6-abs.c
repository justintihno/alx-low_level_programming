#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * computes the absolute value of an integer
 * @n: the input integer
 * Description: prints the absolute value of an integer
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
