#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: An integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	if (s1[i] == '\0')
	return 0;
	return (s1[i] - s2[i]);
}
