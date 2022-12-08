#include <stdio.h>
/*
 * main- for printing size of characters
 *
 * Return- returns a 0
 */
int main(void)
{
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	return (0);
}
