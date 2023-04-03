#include "main.h"

/**
 * _strchr - function to loca
 * @s: input
 * @c: sec input
 * reurn: always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
}
