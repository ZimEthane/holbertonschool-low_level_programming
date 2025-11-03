#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to a 2D array representing the chessboard
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
