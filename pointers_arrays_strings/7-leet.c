#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @s: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int i, j;
	char leet_from[] = "aAeEoOtTlL";
	char leet_to[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_from[j])
			{
				s[i] = leet_to[j];
			}
		}
	}
	return (s);
}
