#include "main.h"

/**
 * print_alphabet - function that prints alphabet from a to z
 * Return: Always 0 (Success)
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
	}
	_putchar('\n');
}
