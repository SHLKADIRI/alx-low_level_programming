#include "main.h"


/**
 * _abs - computes the absolute value of an integer
 * @i: the int to check
 * Return: the absolute value of int
 */
int print_last_digit(int i)
{
	int j;
	if (i < 0)
	{
		i = -(i);
	}
	j = i % 10;
	if (j < 0)
	{
		j = -(j);
	}
	_putchar(j + '0');
	return (j);
}

