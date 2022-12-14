#include <stdio.h>
/**
 * _isalpha - checks if a character is alphabetic
 * Description: checks is a character is alphabetic
 * @c: character to check integer value it receives
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
