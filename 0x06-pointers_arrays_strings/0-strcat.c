#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
