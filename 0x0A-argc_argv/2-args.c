#include <stdio.h>
#include "main.h"
/**
 *main - prints all argument it receives
 *@argc:Number of argument
 *@argv:argument
 *Return: always 0
 */
int main(int argc, char *argv[])
{

(void) argc;
int i;

for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);
	return (0);
}
