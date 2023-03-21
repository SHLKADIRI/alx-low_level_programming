#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times alphabet from a to z
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;
	char i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
