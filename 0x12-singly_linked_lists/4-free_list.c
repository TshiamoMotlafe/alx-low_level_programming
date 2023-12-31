#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	list_t *next;

	while (current != NULL)
	{
	next = current->next;
	free(current->str);
	free(current);
	current = next;
	}
}
