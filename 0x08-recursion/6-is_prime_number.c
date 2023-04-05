#include "main.h"

/**
 * a_p - return 0 or 1
 * @m: number to check
 * @i: iterrator
 * Return: 1 if n is prime, 0 if not
 */
int a_p(int m, int i)
{
	if (i < m)
		if (m % i == 0)
			return (0);
		else
			return (a_p(m, i + 1));
	else
		return (1);
}

/**
 * is_prime_number - function to check if a integer is a pm
 * @n: number to check
 * Return: 1 if n is a pm, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (a_p(n, 2));
}
