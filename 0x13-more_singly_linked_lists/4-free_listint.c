#include "lists.h"

/**
 * free_listint - frees ls
 * @head: listint_t li khass t freda
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
