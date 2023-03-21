#include "main.h"

/**
 * print_sign - function that checks if a charcater is posi, zero or nega
 * @n: parameter
 * Return: 1 is n is positive
 * and 0 if it(s equal to zero
 * and -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
