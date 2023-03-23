#include "main.h"

/**
 * _isupper - function that checks if a charcater is a uppercase or not
 * @c: parameter
 * Return: 1 is c is uppercase
 * and 0 if it's not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
