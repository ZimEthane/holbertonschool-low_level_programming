#include "main.h"
/**
 * int _isupper(int c) - Entry point
 * @c - variable tester
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        printf("%d : 1", c);
    }

    else
    {
        printf("%d : 0", c);
        return (0);
    }
}
