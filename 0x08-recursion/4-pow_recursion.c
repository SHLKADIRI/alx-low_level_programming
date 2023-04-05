#include "main.h"

/**
 * _pow_recursion - fucntion that calculate the power if an integer
 * @x: input
 * @y: input
 * Return: the pow of an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
