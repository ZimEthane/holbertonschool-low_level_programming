#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 *
 * Return: A pointer to the newly created array
 *         If min > max, return NULL
 *         If memory allocation fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
