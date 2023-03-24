#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
