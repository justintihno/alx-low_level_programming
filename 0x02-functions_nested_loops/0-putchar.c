#include "_putchar.h"

/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int x = 0;
	while (str[x] != '\0')
	{
		char c = str[x];
		_putchar(c);
		x++;
	}
return (0);
}
