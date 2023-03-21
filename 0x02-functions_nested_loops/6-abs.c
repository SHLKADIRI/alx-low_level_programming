#include "main.h"

/**
 * _abs - function that checks if a charcater
 * @a: a parameter to be checked 
 * Return: a if a is positive
 * and -a if a is negative
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		a = -(a);
		return (a);
	}
}
