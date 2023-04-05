#include "main.h"

/**
 * factorial - function to calculate the factorial of a number
 * @n: an input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
