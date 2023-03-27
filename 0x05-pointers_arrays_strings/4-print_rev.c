#include "main.h"

/**
 * print_rev - function that pointer to an int
 * @s: string to print
 */
void print_rev(char *s)
{
	int len;
	int r;

	while (*s != '\0')
	{
		_putchar(*s++);
	}
	for (r = len; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

