#include "main.h"
#include <stdio.h>
/**
 *main - prints the number of argument passed into an executable command
 *@argc:Number of argument
 *@argv:Argument
 *Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv*/

	printf("%d\n", argc);
	return (0);
}

