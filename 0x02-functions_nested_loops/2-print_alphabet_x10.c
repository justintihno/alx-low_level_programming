#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase 10 times
 * Return: Always 0 (success)
 */
int main(void)

{
	char x;
	int y;
	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	return (0);
}
