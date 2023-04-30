#include "lists.h"

/**
 * free_listint - This is to free a linked list
 * @head: This is the listint_t list that will be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
