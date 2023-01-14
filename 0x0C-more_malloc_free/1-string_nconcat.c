#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be used
 * Return: pointer to the newly allocated space in memory
 * containing the concatenation of s1 and the first n bytes of s2,
 * or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	new_string = malloc(len1 + n + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_string[len1 + j] = s2[j];
	}
	new_string[len1 + n] = '\0';
	return (new_string);
}
