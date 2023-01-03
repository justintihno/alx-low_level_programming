#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first occurrence of c in s, or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	char *result = (char *)0;

	while (*s!='\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
	return ('\0');
	}
}
