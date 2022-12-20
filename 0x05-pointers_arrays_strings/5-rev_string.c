#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	char *beginning = s;
	char *end = s;

while (*end)
{
	end++;
	len++;
}
end--;
while (beginning < end)
{
	char temp = *beginning;
	*beginning = *end;
	*end = temp;
}
}
