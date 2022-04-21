#include "lists.h"
/**
 * list_len - Returns the number of elements in a list.
 * @h: Singly linked list.
 * Return: Number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
