#include "lists.h"

/**
 * print_listint - prints all ele of ll
 * @S: katlinke
 * Return: number of nodes
 */
size_t print_listint(const listint_t *S)
{
	size_t num = 0;

	while (S)
	{
		printf("%d\n", S->n);
		num++;
		S = S->next;
	}
	return (num);
}
