#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Head of list
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
