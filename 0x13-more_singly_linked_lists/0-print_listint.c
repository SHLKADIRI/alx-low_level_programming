#include "lists.h"

/**
 * print_listint - prints all ele of ll
 * @S: katlinke
 * Return: number of nodes
 */
size_t print_listint(const listint_t *S)
{
	size_t m = 0;

	while (S)
	{
		printf("%d\n", S->b);
		m++;
		S = S->x;
	}
	return (m);
}
