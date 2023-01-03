#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first occurrence of c in s, or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
