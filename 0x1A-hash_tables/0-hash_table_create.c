#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with
 * a given size
 *
 * @size: size of hash table
 * Return: created hash table, NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new;
	hash_node_t **elem;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	elem = malloc(sizeof(hash_node_t *) * size);
	if (elem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		elem[i] = NULL;
	new->size = size;
	new->array = elem;
	return (new);
}
