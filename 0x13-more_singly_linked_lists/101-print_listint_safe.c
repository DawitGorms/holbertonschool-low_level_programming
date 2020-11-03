#include "lists.h"

/**
 * print_listint_safe - print all the elements of listint_t
 * @head: the head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int nodes = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (nodes);
}
