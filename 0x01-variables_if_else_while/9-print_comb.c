#include <stdio.h>
/**
*main - print entry
*Description : using the main function
*Return: 0 (success)
*/

int main(void)
{
int i;
for (i = '0' ; i <= '9' ;  i++)
{
{
putchar(i);
}
if (i != '9')
putchar(',');
putchar(' ');
}
return (0);
}


