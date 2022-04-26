#include "lists.h"

/**
 * listint_len - Returns number of elements
 * in a linked list
 * @h: Head of linked list
 *
 * Return: Number of elements
 */
size_t listint__len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
