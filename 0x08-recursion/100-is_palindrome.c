#include "main.h"

/**
 * len - checks the lenght of a string
 * @s: the string
 * Return: return the lenght of s
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(S + 1));
}

/**
 * check - checks is a string is pali
 * @i: index
 * @l: the lenght
 * @s: the string
 * Return: A if s is a pali, 0 if not
 */
int check(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
			return (check(i + 1, l - 1, s));
		else if (s[i] != s[l])
			return (0);
		else
			return (i);
	}
	return (i);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return i if the string is a pali or 0 otherwise
 */
int is_palindrome(char *s)
	return (check(0, len(s) - 1, s);
