#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: point the head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;
	list_t *ptr = head;

	while (ptr)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
	head = NULL;
}
