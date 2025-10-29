#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * string_toupper -	 function that reverses a string
 * @s: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
