#include "lists.h"

/**
 * sum_listint - sum
 * @head: the head of the list
 * Return: returns the sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

        if (!head)
                return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
