#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string to an integer
 * @s: pointer to a string
 *
 *
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');

		}
		else if (s[i] == '-')
		{
			sign = -sign;
		}
	}
	return (s[i]);
}
