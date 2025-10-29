#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * cap_string -	 function that capitalizes all words of a string
 * @s: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '\n' || s[i - 1] == ' ' || s[i - 1] == '	' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || i == 0)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}