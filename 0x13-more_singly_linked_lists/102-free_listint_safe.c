#include "lists.h"

/**
 * Free_listint_safe - This frees a linked list.
 * @k: This is a pointer to the first node in the linked list.
 *
 * Return: The no. of elements in the freed list.
 */
size_t free_listint_safe(listint_t **k)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!k || !*k)
		return (0);

	while (*k)
	{
		diff = *k - (*k)->next;
		if (diff > 0)
		{
			temp = (*k)->next;
			free(*k);
			*k = temp;
			len++;
		}
		else
		{
			free(*k);
			*k = NULL;
			len++;
			break;
		}
	}

	*k = NULL;

	return (len);
}
