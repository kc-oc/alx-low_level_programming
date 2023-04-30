#include "lists.h"

/**
 * listint_len - This returns the no. of elements in a linked lists.
 * @k: This is the linked list of type listint_t to be traversed.
 *
 * Return: This is the no. of nodes.
 */
size_t listint_len(const listint_t *k)
{
	size_t num = 0;

	while (k)
	{
		num++;
		k = k->next;
	}

	return (num);
}
