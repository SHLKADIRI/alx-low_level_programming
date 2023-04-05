#include "main.h"

int a_p(int n, int i);

/**
 * is_prime_number - function to check if a integer is a pm
 * @n: number to check
 * Return: 1 if n is a pm, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_p(n, 2));
}
/**
 * a_p - calculate if a number is prime or not
 * @m: number to check
 * @i: iterrator
 * Return: 1 if n is prime, 0 if not
 */
int a_p(int m, int i)
{
	if (i < m)
		if (m % i == 0)
			return (0);
		return (a_p(m, i + 1));

	return (1);
}
