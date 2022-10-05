#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints all argument it receives
 *@argc:Number of argument
 *@argv:argument
 *Return: always 0
 */

int main(int argc, char *argv[])
{


int i, mul1, mul2, mul;
int n = 2;

printf("%d\n", argc);


printf("Total = %d\n", mul);
if (argc != 3)
	printf("Error\n");

else if (argc > 0)
    {
        for(i = 0; i < argc; i++)
        {
            printf("argv[%d]=%s\n",i,  argv[i]);
          }
          
            mul1 = atoi(argv[1]);
            mul2 = atoi(argv[2]);
            
            n = mul1 * mul2;
            
            
            printf("%d\n", n);

        }
return (1);
}
