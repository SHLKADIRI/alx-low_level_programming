#include "main.h"

/**
 * clear_bit - function li kadir dkchi
 * @n: pointer to dak
 * @index: index
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
