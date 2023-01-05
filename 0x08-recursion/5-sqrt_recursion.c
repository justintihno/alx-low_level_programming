#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: -1 if there is no natural square root
 */

int _find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_find_sqrt(n, i + 1));
}

/**
 * _find_sqrt - helper function to find the square root of n
 * @n: number to find the square root of
 * @i: current guess for the square root
 * Return: natural square root of n, or -1 if not found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 1));
}
