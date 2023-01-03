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

	while (*s)
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}
	return (result);
}
