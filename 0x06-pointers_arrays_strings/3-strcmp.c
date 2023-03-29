#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: first string
 * @s2: second string
 * Return: 1 if stringd are equal
 * 0: if theey are not
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}
