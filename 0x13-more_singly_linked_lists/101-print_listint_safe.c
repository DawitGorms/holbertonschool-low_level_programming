#include "lists.h"

/**
 * print_listint_safe - print all the elements of list_t
 * @head: the head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (!head)
		return (98);
	while (head)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		nodes++;
		if (head > head->next)
			head = head->next;
		else
		{
			head = head->next;
			printf("-> [%p] %i\n", (void *)head, head->n);
			break;
		}
	}
	return (nodes);
}
