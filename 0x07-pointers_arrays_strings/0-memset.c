#include "main.h"
#include <stdio.h>

/**
 * _mmeset - fills a memory block with a constant byte
 * @s: address to memory block
 * @b: char to br used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */


char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}