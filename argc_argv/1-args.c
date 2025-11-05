#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i - 1);
	}
	return (0);
}
