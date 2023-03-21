#include "main.h"

/**
 * _isalpha - function that checks if a charcater is an alphabet or not
 * @c: parameter
 * Return: 1 is c is an alphabet
 * and 0 if it's not
 */
int _isalpha(int c)
{
	if (c >= 47 && c <= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
