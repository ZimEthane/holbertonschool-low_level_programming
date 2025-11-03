#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
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
