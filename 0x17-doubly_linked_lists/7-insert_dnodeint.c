#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to ddl
 * @idx: where the new node should be added
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int index;

	if (!h)
		return (NULL);

	ptr = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!idx)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (ptr)
			ptr = ptr->next;
		else
		{
			free(new);
			return (NULL);
		}
	}
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
