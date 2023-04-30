#include "lists.h"

/**
 * print_listint_safe - This is a function that prints the elements in a  list
 * @head: This is a list of type listint_t to be printed.
 *
 * Return: The number of nodes available.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t elements = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		elements++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
			}
	}
	return (elements);
}
