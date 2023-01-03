#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first occurrence of c in s, or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return ('\0')
}
