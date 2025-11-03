#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
