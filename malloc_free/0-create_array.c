#include <stdio.h>

/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0){
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL){
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
