#include "lists.h"

/**
 * sum_listint - Returns sum of all the data
 * of a linked list.
 * @head: Head of a linked list
 *
 * Return: Sum of all the data, 0 if list is
 * empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
