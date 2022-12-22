#include "main.h"

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase
 * @s: Pointer to the string
 * Return: Pointer to the resulting string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}
	return (s);
}
