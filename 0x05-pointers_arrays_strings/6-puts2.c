#include "main.h"
/**
 *puts2 - prints every charcter of a string
 *@str: A pointerto an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar(str[a]);
}

_putchar('\n');
}
