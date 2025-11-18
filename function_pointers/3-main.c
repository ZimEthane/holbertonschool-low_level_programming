#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98, 99, 100 on failure
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 && b == 0) ||
		(strcmp(argv[2], "%") == 0 && b == 0))
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
