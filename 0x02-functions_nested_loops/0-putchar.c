#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	char str[] = "_putchar\n";
	x = 0;
	while (str[x] != '\0')
	{
		char c = str[x];
		_putchar(c);
		x++;
	}
return (0);
}
