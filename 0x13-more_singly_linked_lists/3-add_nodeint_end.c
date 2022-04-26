#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * of a list
 * @head: Head of a list
 * @n: nth element
 *
 * Return: Address of the new element, NULL if
 * it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t;

	(void)t;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	t = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}

	return (*head);
}
