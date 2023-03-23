#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int n;
	char i;

	for (n = 1; n <= 10; n++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
