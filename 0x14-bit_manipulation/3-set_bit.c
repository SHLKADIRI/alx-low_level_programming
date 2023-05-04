#include "main.h"

/**
 * set_bit - function li kadir dkchi li maerftch
 * @n: pointer d dak numbr
 * @index: index
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
