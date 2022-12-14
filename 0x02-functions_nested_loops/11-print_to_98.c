#include<stdio.h>

/**
 * Prints the numbers from n to 98, either in ascending or descending order depending on the value of n.
 * If n is greater than 98, the numbers are printed in descending order. If n is less than 98, the numbers are printed in ascending order.
 * @param n: The number from which to start printing the numbers.
 * @return void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
	}
	else 
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
