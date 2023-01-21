#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
