#include "lists.h"

/**
 * print_listint_safe - print all the elements of listint_t
 * @head: the head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %i\n", (void *)head, head->n);

		if (head > head->next)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %i\n", (void *)head, head->next->n);
			return (1);
		}
	}
	return (0);
}
