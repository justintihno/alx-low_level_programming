#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: the number to determine if is a prime number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime_number_helper(n, 5));
}

/**
 * is_prime_number_helper - checks if a number is prime, helper function
 * @n: number to check
 * @i: current divisor to check
 * Return: 1 if n is prime, 0 if n is not prime
 */

int is_prime_number_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	return (is_prime_number_helper(n, i + 6));
}
