#include "main.h"

/**
 * _strncat - function that concatinate two strings
 * @dest: first string
 * @src: second string
 * @n: charcter
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
