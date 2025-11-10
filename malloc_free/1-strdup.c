#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string by allocating new memory.
 * 
 * @str: the string to duplicate.
 *
 * Return: pointer to the duplicated string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	cpy = (char *)malloc((len + 1) * sizeof(char));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	cpy[len] = '\0';

	return (cpy);
}
