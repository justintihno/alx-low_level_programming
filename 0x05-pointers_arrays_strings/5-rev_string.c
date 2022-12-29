#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;

while (*end)
	end++;
end--;
while (s < end)
{
	char temp = *s;
	*s = *end;
	*end = temp;
	s++;
	end--;
}
}
