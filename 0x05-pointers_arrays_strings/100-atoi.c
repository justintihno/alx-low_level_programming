#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int i, sign = 1, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	return (num * sign);
}
