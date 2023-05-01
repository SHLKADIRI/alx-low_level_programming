#include "lists.h"

/**
 * get_nodeint_at_index - returns f chi spec index
 * @head: first node in ls
 * @index: index of the node li khass yrjee
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
