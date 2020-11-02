B#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: points to the head of the list
 * @idx: the index of the node
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!head || !*head || !newNode)
		return (NULL);

	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (ptr)
	{
		if (index == idx - 1)
		{
			newNode->next = ptr->next;
			ptr->next = newNode;
			return (newNode);
		}

		ptr = ptr->next;
		index++;
	}
	free(newNode);
	return (NULL);
}
