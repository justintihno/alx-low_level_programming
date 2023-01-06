#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	if (*s == '\0')
		return ('\0');
	return (1 + find_strlen(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked
 * @len: The length of s.
 * @index: The index of the string to be checked.
 * Return: If the string is a palindrome - 1. 0 If the string is not a palindrome
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] != s[len - index - 1])
		return (0);
	if (index == len / 2)
		return (1);
	return (check_palindrome(s, len, index + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked.
 * Return: If the string is a palindrome - 1, 0 If the string is not a palindrome
 */

int is_palindrome(char *s)
{
	int len = find_strlen(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, len, 0));
}
