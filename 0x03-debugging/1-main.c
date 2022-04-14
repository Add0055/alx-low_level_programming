#include <stdio.h>
/**
 * main - causes infinite loop
 *
 * Return: 0
 */
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
 * while (i < 10)
 * {
 * infinite loop - No increase of variable
 * putchar(i);
 }
 */
printf("infinite loop avoided \\0/n\n");

return (0);
}
