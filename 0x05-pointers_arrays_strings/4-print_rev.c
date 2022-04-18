#include "main.h"
/**
 * print_rev - prints a string in a reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = 0; i - 1; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

