#include "main.h"

/**
 * _print_sign - function that checks if a charcater is positive, zero or negative
 * @n: parameter
 * Return: 1 is n is positive
 * and 0 if it(s equal to zero
 * and -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
        }
	else
	{
		return (-1);
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
