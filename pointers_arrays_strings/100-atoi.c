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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			_putchar(s[i]);
		}
		else if (s[i] == '-')
		{
		}
		else
		{
		}
	}
	return (s[i]);
}
