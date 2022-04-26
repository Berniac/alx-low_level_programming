#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: head of linked list.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
