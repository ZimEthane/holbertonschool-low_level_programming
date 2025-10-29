#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to concatenate
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
