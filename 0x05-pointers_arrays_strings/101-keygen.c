#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */

int main(void)
{
	int n;
	char c;

	srand(time(NULL));
	while (n <= 3125)
	{
		c = rand() % 128;
		n += c;
		putchar(c);
	}
	putchar(1286 - n);
	return (0);
}
