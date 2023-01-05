#include "main.h"

/**
 * _find_sqrt - find the square root of a number
 * @n: number to find the square root of
 * @i: number to check if it is the square root
 * Return: the square root of n, or -1 if it does not exist
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
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: the square root of n, or -1 if it does not exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 1));
}
