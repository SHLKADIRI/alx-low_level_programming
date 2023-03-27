#include "main.h"

/**
 * _strlen - function that pointer to an int
 * @s: pointer
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}

