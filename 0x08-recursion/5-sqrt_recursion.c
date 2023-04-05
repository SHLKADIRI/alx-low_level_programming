#include "main.h"

int a_s_r(int n, int i);

/**
 * _sqrt_recursion - fucntion to calculate the root square of a number
 * @n: input
 * Return: the root squre
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_s_r(n, 0));
}
/**
 * a_s_r - recurses to find the natural s n
 * @n: the number we want his square root
 * @i: iterator
 * Return: the result
 */
int a_s_r(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_s_r(n, i + 1));
}
