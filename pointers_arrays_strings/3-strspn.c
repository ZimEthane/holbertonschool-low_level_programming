#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *a; 

	count = 0;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break; 
			}
		}
		if (*a == '\0')
			return (count);
		s++;
	}
	return (count);
}
