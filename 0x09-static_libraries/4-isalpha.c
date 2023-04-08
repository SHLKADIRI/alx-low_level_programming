#include "main.h"

/**
 * _isalpha - function that checks if a charcater is an alphabet or not
 * @c: parameter
 * Return: 1 is c is an alphabet
 * and 0 if it's not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
