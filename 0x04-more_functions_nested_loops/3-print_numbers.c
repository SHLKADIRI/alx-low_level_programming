#include "main.h"

/**
 * print_numbers - function that prints alphabet from a to z
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
