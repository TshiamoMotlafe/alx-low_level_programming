#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list - A structure representing a linked list node.
 * @str: The string data stored in the node.
 * @len: The length of the string.
 * @next: A pointer to the next node in the list.
 *
 * Description: This structure defines a node for a singly-linked list
 * where each node contains a string and its length, as well as a pointer
 * to the next node in the list.
 */
typedef struct list 
{
	char *str;

	unsigned int len;

	struct list *next;
} list_t;
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);

#endif /* LISTS_H */
