#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;
 
	while (dest[dest_len++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
