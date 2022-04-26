#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a list
 * @head: Head of a list
 * @n: nth element
 *
 * Return: Address of new element, NULL if it
 * failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
