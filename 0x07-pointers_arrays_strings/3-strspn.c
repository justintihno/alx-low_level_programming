#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: string to search
 *
 * @accept: string containing the characters to search for
 *
 * Return: the number of bytes in the initial segment of s which 
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				break;
	}
	return (i);
}
