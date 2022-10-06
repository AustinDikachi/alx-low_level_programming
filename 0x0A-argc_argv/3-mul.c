#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints all multiplication of two numbers
 *@argc:Number of argument
 *@argv:argument
 *Return: 0 for success, 1 for Error
 */

int main(int argc, char *argv[])
{
int mul1, mul2;
int n = 0;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}

		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		n = mul1 * mul2;
		printf("%i\n", n);
return (0);

}
