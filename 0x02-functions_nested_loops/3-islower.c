#include "main.h"

/**
 * _islower - function that checks if a charcater is a lowercase or not
 * Return: 1 is c is lowercase and 0 if it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
