#include "main.h"

/**
  *_puts_recursion - prints a string
  *@s: pointer block of memory to fill
  *Return: void
  */

void _puts_recursion(char *s)
{
if (*s)
{
	_putchar('\n');
}
	_putchar(*s);
	_puts_recursion(s + 1);
}

