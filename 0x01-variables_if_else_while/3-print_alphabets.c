#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char lowercase;
char uppercase;

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}

putchar('\n');

return (0);

}
