#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of the programme
 *@argc: counts argument
 *@argv: arguments
 *Return: always 0 (success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s", argv[0]);
	{
		putchar('\n');
	}
	return (0);
}
