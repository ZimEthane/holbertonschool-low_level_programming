#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 *
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
}
