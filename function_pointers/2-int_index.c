#include "stdio.h"
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function.
 * @array: pointer to the array.
 * @size: size of the array.
 * @cmp: pointer to the comparison function.
 *
 * Return: index of the first element for which cmp returns non-zero,
 *         or -1 if no such element is found or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	
}
