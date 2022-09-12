#include <stdio.h>
/**
*main - print entry
*
*Description : using the main function
*Return: 0 (success)
*/

int main(void)
{
int i;
char lw;
for (i = '0' ; i <= '9'; i++)
{
putchar (i);
}
for (lw = 'a'; lw <= 'f'; lw++)
{
putchar(lw);
}
{
putchar('\n');
}
return (0);
}
