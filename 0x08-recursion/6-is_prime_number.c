#include "main.h"

int a_p(int n, int i);

/**
 * is_prime_number - function to check if a integer is a pm
 * @n: number to check
 * Return: 1 if n is a pm, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (a_p(n, n - 1));
}
/**
 * a_p - calculate if a number is prime or not
 * @n: number to check
 * @i: iterrator
 * Return: 1 if n is prime, 0 if not
 */
int a_p(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_p(n, i - 1));
}
