#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a
 * linked list
 * @head: Head of linked list
 * @index: index of the node
 *
 * Return: nth node, NULL if node doesn't exist
 */
listint_t get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head !=NULL; i++)
		head = head->next;

	return (head);
}
