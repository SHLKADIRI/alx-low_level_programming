#include "main.h"

/**
 * _memset - a function to fill a block of memory with a spc value
 * @s: starting adress
 * @b: value to be assigned
 * @n: number of bytes
 *
 * Return: changed array with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
