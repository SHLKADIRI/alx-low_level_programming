#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: first string
 * @src: second string
 * @n: charcter
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (dest[i] != '\0')
		i++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
