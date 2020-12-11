#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: of the node te remove
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *node;
	dlistint_t *ptr = *head;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	while (ptr)
	{
		if (idx == index)
		{
			node->next = ptr->next;
			node->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		node = ptr;
		ptr = ptr->next;
		idx++;
	}
	return (-1);
}
