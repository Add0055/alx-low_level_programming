#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++);
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
