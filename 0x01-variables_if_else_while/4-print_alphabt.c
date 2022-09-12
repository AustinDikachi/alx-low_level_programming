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
for (lowercase = 'a'; lowercase <= 'z';  lowercase++)

if (lowercase != 'e' && lowercase != 'q')
putchar (lowercase);
{
putchar('\n');
}
return (0);
}
