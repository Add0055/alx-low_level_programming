#include "main.h"

/**
 * print_square - prints hashtag to make a square
 * @size: limit
 *
 * Return: void
 */

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
else
{
_putchar('\n');
}
}
