#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
