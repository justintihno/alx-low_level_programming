#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: Checks last digit of the assigned variable
 *Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d\n and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d\n and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d\n and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
