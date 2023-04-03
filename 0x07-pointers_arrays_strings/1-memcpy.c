#include "main.h"

/**
 * _memcpy - function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes to be changed
 *
 * Return: copied memory with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		s[i] = s[j];
		n--;
	}
	return (dest);
}
