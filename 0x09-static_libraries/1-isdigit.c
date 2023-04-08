#include "main.h"

/**
 * _isdigit - function that checks if a charcater is an alphabet or not
 * @c: parameter
 * Return: 1 is c is an alphabet
 * and 0 if it's not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
