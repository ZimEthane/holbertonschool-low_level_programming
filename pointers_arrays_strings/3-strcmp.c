#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

