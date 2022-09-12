#include <stdio.h>
/**
*main - print entry
*
*Description : using the main function
*Return: 0 (success)
*/

int main(void)

{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}

char uppercase;
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
{
putchar('\n');
}
return (0);
}
