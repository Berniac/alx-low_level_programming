#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked
 * list.
 * @head: Head of linked list
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *c;

	if (*head == NULL)
		return (0);

	c = *head;

	hnode = c->n;

	h = c->next;

	free(c);

	*head = h;

	return (hnode);
}
