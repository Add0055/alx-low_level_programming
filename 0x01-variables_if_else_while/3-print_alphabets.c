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

for (lowercase = 'a'; uppercase <= 'z'; lowercase++)
{
putchar(lowercase);
}

for (uppercase = 'A'; lowercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}

putchar ('\n');

return (0);

}
